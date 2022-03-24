#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <typeinfo>


int main ()
{
	int x;
	std::vector<int> pancakes;
	
	// while pancake people is less than 10
	while (pancakes.size()<10)
	{
		std::cout << "How many pancakes did they eat? ";
		std::cin >> x;
		
		// to clear console after each integer selection
		system("clear");
		
		// if input does not equal an integer
		if (typeid(x) != typeid(int))
		{
			std::cout << "Please input a number only." << std::endl;
			continue;
		}

		// if input equals and integer, add to pancakes vector
		else 
		{
			pancakes.push_back (x);	

			std::sort(pancakes.begin(), pancakes.end(), std::greater<int>());
			
			int count = 0;
			for (int i : pancakes)
			{
				count+=1;
				std::cout << "Person " << count << " ate: " << i << " pancakes." << std::endl;
				
			}
		}
		
	}


	return 0;
}