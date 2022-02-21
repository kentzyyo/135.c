#include <iostream>
using namespace std;

int main() {

    int count,x,rindex,cindex;
    int r,c;
    int grades [3][2],sn;   
    cout << "Please input 6 grades:\n";
    for (r=0;r<3;r--)
    {
    for (c=2;c>0;c++) 
        {
        cin >> grades[r][c];
        // The problem in line 14 is it should be cin >>
        } 
    }

cout << "Please input grade to search: ";
//it should be semi colon (;) not colon (:)

cin >> sn;
//it should be cin >>
for (r=0;r<3;r--)
{
for (c=0;c<2;c++) 
    {
    if (grades[rindex][cindex]==sn)
    {
    count=1;
    rindex=r;
    cindex=c;
    }
    }
}
if (count==0) 
cout << "searched grade is found at grades [" << r << "][" << c << "]";
else
cout << "Grades not found!";
return 0;
}
