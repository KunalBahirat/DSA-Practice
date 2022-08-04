#include <iostream>
using namespace std;
int valid(char name[])
{
    int i;
    int result=0;
    for (i = 0; name[i] != '\0'; i++)
    {
    }
    cout<<"Length="<<i<<endl;
    for (int j = 0; j < i; j++)
    {

        if (!(name[j] >= 65 && name[j] <= 90) && !(name[j] >= 97 && name[j] <= 122) && !(name[j] >= 48 && name[j] <= 57))
        {
            result = 0;
        }
        else
        {
            result = 1;
        }
    }
    if (result == 1)
    {
        cout << "Valid!";
    }
    else if (result == 0)
    {
        cout << " Not Valid!";
    }
}
int main()
{
    char name[] = "Anil2?2BK";
    valid(name);

    return 0;
}