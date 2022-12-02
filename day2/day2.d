import std.stdio;

int getWinner(char player1, char player2){
    if(player1 == 'A'){
        if(player2 == 'X')
            return 0;
        if(player2 == 'Y')
            return 2;
        return 1;
    }
    if(player1 == 'B'){
        if(player2 == 'X')
            return 1;
        if(player2 == 'Y')
            return 0;
        return 2;
    }
    if(player1 == 'C'){
        if(player2 == 'X')
            return 2;
        if(player2 == 'Y')
            return 1;
        return 0;
    }
    return -1;
}

int getPoints(char player1, char player2){
    int[char] points;
    points['A'] = points['X'] = 1;
    points['B'] = points['Y'] = 2;
    points['C'] = points['Z'] = 3;

    int thisRound = 0;

    if(getWinner(player1, player2) == 2)
        thisRound += 6;
    else if(getWinner(player1, player2) == 0)
        thisRound += 3;
    
    thisRound += points[player2];
    return thisRound;

}

void partOne(){
    auto file = File("input.in", "r");
    char player1, player2, aux;
    int total = 0;
    while(file.readf("%c%c%c%c", &player1, &aux, &player2, &aux) > 0){
        //writeln(player1, player2);
        total += getPoints(player1, player2);
    }
    writeln("Answer to the first quest: ", total);
}

char selectPlayer2(char player1, char result){
    char[char] winner;
    winner['A'] = 'Y';
    winner['B'] = 'Z';
    winner['C'] = 'X';

    char[char] loser;
    loser['A'] = 'Z';
    loser['B'] = 'X';
    loser['C'] = 'Y';

    char[char] tie;
    tie['A'] = 'X';
    tie['B'] = 'Y';
    tie['C'] = 'Z';

    if(result == 'X')
        return loser[player1];

    if(result == 'Y')
        return tie[player1];

    return winner[player1];
}

void partTwo() {
    auto file = File("input.in", "r");
    char player1, result, aux, player2;
    int total = 0;
    while(file.readf("%c%c%c%c", &player1, &aux, &result, &aux) > 0){
        //writeln(player1, player2);
        player2 = selectPlayer2(player1, result);
        total += getPoints(player1, player2);
    }
    writeln("Answer to the second quest: ", total);
}

void main() { 
    partOne();
    partTwo();
}

