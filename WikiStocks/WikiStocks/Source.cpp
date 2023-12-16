#include <iostream>
#include <curlpp/cURLpp.hpp>
#include <curlpp/easy.hpp>
#include <curlpp/options.hpp>
using namespace curlpp::options;

int main()
{
	curlpp::Cleanup myCleanup;

	std::cout << Url("https://wikimedia.org/api/rest_v1/metrics/pageviews/per-article/en.wikipedia.org/all-access/all-agents/Undertale/daily/20231214/20231214");
}

