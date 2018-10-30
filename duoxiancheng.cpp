// This is a programming example for C++11
# include<iostream>
# include<thread>

using namespace std;
void hello()
{
    cout<<"hello world"<<endl;
}
int main()
{
    thread t (hello);
    t.join();
}
