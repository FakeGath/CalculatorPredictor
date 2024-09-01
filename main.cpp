#include <iostream>
#include <ctime>



int randomNumber(){
size_t result{0};


result = static_cast<int>(std::rand()%200);
return result;
}

int randomOperation(){
size_t result{0};


result = static_cast<int>(std::rand()%3);
return result;
}


int main(){

    int number1{0};
    int number2{0};
    int entry{0};
    int result{0};

    char operation [3]{
        '-','+','*',
    };

    char finalOp{0};

    bool end {false};
    
    std::srand(std::time(0));
    std::cout<<randomNumber()<<std::endl;
    std::cout<<randomOperation()<<std::endl;

    while (!end)
    {
        char goOn;
        std::cout<<"Welcome to the Calculator Calculator practice"<<std::endl;
        std::cout<<"----------------------------------------------"<<std::endl;

        number1=randomNumber();
        number2=randomNumber();
        finalOp=operation[randomOperation()];

        if (finalOp==0)
        {
            result = number1-number2;
        }if (finalOp==1)
        {
            result = number1+number2;
        }
        else
        {
            result = number1*number2;
        }
        
        std::cout<<"What's the result of " << number1 << " " << finalOp <<" "<< number2<<": ";
        std::cin>>entry;
        std::cout<<std::endl;
        if (result==entry)
        {
            std::cout<<"Congrats!!! the answer is correct"<<std::endl;
        }else{
            std::cout<<"Quite right!!! lets try again "<<std::endl;
        }
        
        std::cout<<"Do yo Want to try again (Y|N)"<<std::endl;
        std::cin>>goOn;
        end = (goOn=='Y'||goOn=='y')?false:true;
    }
    
    std::cout<<"See you Later!!!! Cuchaooooo "<<std::endl;

    return 0;
}