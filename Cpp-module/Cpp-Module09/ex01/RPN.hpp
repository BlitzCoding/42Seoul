#ifndef RPN_H
#define RPN_H

#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<int> rpn_stack;
    public:
        RPN ();
        RPN (const RPN &a);
        ~RPN ();
        RPN& operator=(const RPN& rhs);

        void    solve(char *argv);
        int     calc(int n1, int n2, char o);
};

#endif