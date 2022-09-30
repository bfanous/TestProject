#include <Stdio.h>
int main (){


}

"1235.56"
float strToFloat(char * str)
{
    float r=0,
    int flag=0,count=1;
    float rem = 0;
    for(int i=0;str[i];i++)
    {
        if(str[i] !='.' && !flag)
        {
            r=r*10 + str[i] -'0'
        }
        else 
        {
            flag=1
            continue;
        }
        if(flag)
        rem = str[i] - '0'
        r = r+ (float)rem/(pow(10,count++))
    }

}