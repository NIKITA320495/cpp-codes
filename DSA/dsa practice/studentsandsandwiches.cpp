#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
 int countStudents(queue<int>& students, stack<int>& sandwiches) {
        while(!students.empty())
        {
            if(sandwiches.top()==students.front())
            {
                sandwiches.pop();
                students.pop();
            }
            else
            {
                int u=students.front();
                students.pop();
                students.push(u);
            }
         bool allrecieved= true;
queue<int> tempQueue = students; // Create a copy of the original queue
while (!tempQueue.empty()) {
    if (tempQueue.front() == sandwiches.top()) {
        allrecieved = false;
        break;
    }
    tempQueue.pop(); // Remove the front element
}

             if(allrecieved)
        {
             return students.size();
        }
        }

       return 0;
    }
int main()
{
    int c;
    queue<int>q;
    q.push(0);
    q.push(1);
    q.push(0);
    q.push(1);
    q.push(1);
    q.push(1);
    stack<int>s;
    s.push(1);
    s.push(1);
    s.push(0);
    s.push(0);
    s.push(0);
    s.push(1);
    c=countStudents(q,s);
    cout<<c;
}
