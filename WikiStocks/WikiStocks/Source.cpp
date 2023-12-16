#include <iostream>
#include <curlpp/cURLpp.hpp>
#include <curlpp/easy.hpp>
#include <curlpp/options.hpp>
#include <string>
#include <sstream>
using namespace curlpp::options;

int main()
{
	char loop = 'l';
	while (loop == 'l')
	{
		curlpp::Cleanup myCleanup;
		std::stringstream json;

		std::string urlString = "";
		std::string article = "";
		std::cout << "\nArticle: ";
		std::cin >> article;

		urlString = "https://wikimedia.org/api/rest_v1/metrics/pageviews/per-article/en.wikipedia.org/all-access/all-agents/" + article + "/daily/20231214/20231214";

		json << Url(urlString);

		std::string line;
		while (!json.eof())
		{
			std::getline(json, line, ',');
		}
		std::cout << line << std::endl;
		std::cout << line.substr(8, line.length() - 11) << std::endl;

		std::cout << "Loop: ";
		std::cin >> loop;
	}
}

