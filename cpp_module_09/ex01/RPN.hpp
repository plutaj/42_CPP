#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>

class RPN {
	
	private:
		std::stack<int> _s;

	public:
		RPN();
		RPN(const RPN& obj);
		RPN& operator=(const RPN& obj);
		~RPN();

		int evaluate(const std::string& expr);

	private:
		bool isNumber(const std::string& token);
		bool isOperator(const std::string& token);
};

#endif