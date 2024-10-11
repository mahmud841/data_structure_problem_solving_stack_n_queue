void reverseStack(stack<int> &s) {
    // Write your code here
    if(s.empty()) return ;
    int x=s.top();
    s.pop();
    reverseStack(s);
    //assume reverse hoye gese
    stack<int> cpy;
    while(!s.empty())
    {
        cpy.push(s.top());
        s.pop();
    }
    cpy.push(x);
    while(!cpy.empty())
    {
        s.push(cpy.top());
        cpy.pop();
    }
}