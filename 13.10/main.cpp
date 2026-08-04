#include <iostream>
#include <string_view>

namespace web
{
    struct data
    {
        long long ads {0};
        double clicks {0};
        double cpa {0};
    };
}

void printData(const web::data& data)
{
    std::cout << "Ads were watched: " << data.ads << '\n';
    std::cout << "Percentage of users clicked on an ad: " << data.clicks << '\n';
    std::cout << "Average earings per clicked ad: $" << data.cpa << '\n';
    std::cout << "You've done in 1 day: $" << (data.ads * data.clicks / 100 * data.cpa) << '\n';
}

template <typename T>
void callcin (T& x, const std::string_view whatToWrite)
{
    std::cout << "Enter " << whatToWrite << ": ";
    std::cin >> x;
}

int main()
{

    web::data data {};

    callcin(data.ads, "ads were watched"); 
    callcin(data.clicks, "% of users clicked on an ad");
    callcin(data.cpa, "average earings per clicked ad");

    printData(data);

    return 0;
}