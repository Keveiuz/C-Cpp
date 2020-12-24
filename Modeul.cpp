#include <stdio.h>  //标准库
#include <iostream>  //标准输入输出库
#include <math.h>  //标准数学库
#include <algorithm>  //算法库
#include <string> //字符串
#include <vector> //向量
#include <map> //映射（字典）

using namespace std; //使用申请空间

/*class Str{
    public:
        int i;
        int print(){
            cout<<"hello!";
        };
    protected:
        int j=0;
    private:
        int k;
};*/
/*
int main()
{
    //整型 integer
    int n = 0 ;
    scanf("%d", &n);
    printf("%d", n);

    //字符 charactor
    char c;
    scanf("%c", &c);
    printf("%c\n", c);

    //字符串 string
    char chr[10];
    scanf("%s", chr); //字符串系统会自动分配地址，输入时不加地址符&， 否则会报错
    printf("%s\n", chr);

    //结构体 struct 
    struct standard{    
        char Name[10];
        int age;
    }Student[5];

    int N = 3;

    for(int i = 1; i <= N; i++)
    {
        scanf("%s %d", Student[i].Name, &Student[i].age);
    }

    for(int i = 1; i <= N; i++)
    {
        printf("Name : %s Age : %d\n", Student[i].Name, Student[i].age);
    }

    return 0;
}
*/

int main()
{
    int N = 10, Cnt = 0;
    for(int i = 1; i <= N; i ++)
    {
        Cnt += i;
    }
    printf("%d\n", Cnt);
    return 0;
}


   /*string s;
    cin>>s;
    cout<<s;

    vector<int> v;
    v.push_back(1);
    cout<<v.front();
    v.pop_back();*/