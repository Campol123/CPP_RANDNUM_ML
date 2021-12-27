#include <iostream>
#include <cstdlib>
#include <ctime>

static double pos(double x)
{
    if(x==0)
    {
        x=0;
    }
    else if(x<0)
    {
        x=x-(2*x);
    }
    return x;
}

static double avgNum(double weighting)
{
    double randNum;
    for(int x = 0;x<1000000000;x++)
    {
        randNum += ((rand()%100)+1)*weighting;
    }
    return randNum/1000000000;
}

int main() 
{
    double weight=1;
    double diff;
    int count=0;
    double genNum;
    while(true)
    {
        
        genNum = avgNum(weight);
        diff = std::abs((genNum-50));
        std::cout << "Gen: " << count << " - weighting: " << weight << " - Average Number: " << genNum << " - difference: " << diff << std::endl;
        count++;
        if(diff==0)
        {
            std::cout << "perfect weight: " << weight << std::endl;
            break;
        }
        else if(diff<0.001)
        {
            std::cout << "good weight: " << weight << std::endl;
            break;
        }
        else if(diff>0)
        {
            weight-=0.00001;
        }
        else if(diff<0)
        {
            weight+=0.00001;
        }
        
        

    }

    
} 
