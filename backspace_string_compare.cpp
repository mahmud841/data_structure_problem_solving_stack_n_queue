class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stack1, stack2;
        for(char c:s)
        {
            if(c=='#')
            {
                if(!stack1.empty()) stack1.pop();
            }
            else
            {
                stack1.push(c);
            }
        }
        for(char c:t)
        {
            if(c=='#')
            {
                if(!stack2.empty()) stack2.pop();
            }
            else
            {
                stack2.push(c);
            }
        }
        //  if(stack1==stack2) return true;
        // else return false;
        return stack1==stack2;
    }
};

//Coding ninjas