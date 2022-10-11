#include <iostream>
#include <cmath>
using namespace std;
bool Valid(int row, int pos[])
{	
	for(int i= 0; i < row; ++i)
		if(pos[row] == pos[i] || abs(row - i) == abs(pos[row] - pos[i]))
            return false;
    return true;
}
int main()
{
    int pos[8];
    for ( pos[0] = 0; pos[0] < 8; ++pos[0])//第0行摆好了
    {
        for ( pos[1] = 0; pos[1] < 8; ++pos[1])//第1行摆好了
        {
            if (!Valid(1,pos))
                continue;
            for ( pos[2] = 0; pos[2] < 8; ++pos[2])//第2行摆好了
            {
                if (!Valid(2,pos))
                    continue;
                for ( pos[3] = 0; pos[3] < 8; ++pos[3])//第3行摆好了
                {
                    if (!Valid(3,pos))
                    continue;                          
                    for ( pos[4] = 0; pos[4] < 8; ++pos[4])//第4行摆好了
                    {
                        if (!Valid(4,pos))
                        continue;
                        for ( pos[5] = 0; pos[5] < 8; ++pos[5])//第5行摆好了
                        {
                            if (!Valid(5,pos))
                            continue;
                            for ( pos[6] = 0; pos[6] < 8; ++pos[6])//第6行摆好了
                            {
                                if (!Valid(6,pos))
                                continue; 
                                for ( pos[7] = 0; pos[7] < 8; ++pos[7])//第7行摆好了
                                {
                                    if (Valid(7,pos))
                                    {
                                        for (int i = 0; i < 8; i++)
                                        {
                                            cout << pos[i] << " ";
                                        }
                                        cout << endl;
                                    }          
                                }          
                            }       
                        }           
                    }
                }
            }
        }
        
    }
    
}
/*测试