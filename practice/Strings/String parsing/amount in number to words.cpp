// Our company wants to create a data entry verification system. 

// Given an amount in words and an amount indicated by data entry person in numbers, you have to detect whether the amounts are same or not.

// Note: There are a lot of corner cases to be considered. Interviewer expects you to take care of them.

// Input:

// String num: Amount written in digits as a string. This string will be an integer number without having any commas in between the digits.
// String words: Amount written in words according to Indian Numbering System.


int Solution::solve(string A, string B) {



if(B.back() == '-')

    return 0;


int Number = stoi(A);


map<string,int> MappingNumbers {{"one",1},{"two",2},{"three",3},{"four",4},{"five",5},{"six",6},{"seven",7},{"eight",8},{"nine",9},{"zero",0},


{"eleven",11},{"twelve",12},{"thirteen",13},{"fourteen",14},{"fifteen",15},{"sixteen",16},{"seventeen",17},{"eighteen",18},{"nineteen",19},


{"ten",10},{"twenty",20},{"thirty",30},{"forty",40},{"fifty",50},{"sixty",60},{"seventy",70},{"eighty",80},{"ninety",90},

};


map<string,int> KeyWords {{"hundred",100},{"thousand",1000},{"lakh",100000},{"crore",pow(10,7)},};




char *token = strtok(&B[0],"-");


int n=0;


int temp=0;


int c=0;



while(token != NULL)

{

    //cout << token << "  ";

    if(MappingNumbers[token])

    {

        temp += MappingNumbers[token]; 

    }

    else if(KeyWords[token])

    {

        n += temp*KeyWords[token];

        temp=0;

    }

    else if(strcmp(token,"and") == 0)

    {

        c=1;

    }

    else

        return 0;


    token = strtok(NULL, "-");

}



if(temp != 0 && n != 0 && c == 0)

    return 0;


n += temp;





if( n == Number)

    return 1;

else

    return 0;

}
