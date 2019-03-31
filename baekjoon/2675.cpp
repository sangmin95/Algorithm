#include <iostream>
#include <string>

int TC;

int main()
{
	std::ios::sync_with_stdio(false);

	int R;
	std::string S;

	std::cin >> TC;
	
	while(TC--)
	{
		std::cin >> R;
		std::cin >> S;
		
		std::string::iterator iter;
		for(iter=S.begin();iter!=S.end();iter++)
		{
			for(int i=0;i<R;i++)
				std::cout << *iter;
		}	
		std::cout << std::endl;
		S.clear();
	}
	
	return 0;
}
