#include <iostream>
#include <string>

struct Advertising
{
    int adsShown;
    double percentClicked;
    double averageEarned;
};

double calculation(Advertising site)
{
    return site.adsShown * site.percentClicked * site.averageEarned;
}

void printValues(Advertising site)
{
    std::cout << site.adsShown << " ads were shown to visitors today. \n";
    std::cout << site.percentClicked * 100 << " percent of ads were clicked today. \n";
    std::cout << site.averageEarned << " dollars were made from each ad. \n";
    std::cout << "You made " << calculation(site) << " dollars from advertising today.";
}

int main()
{
    Advertising website;
    
    
    std::cout << "How many ads were shown today? \n";
    std::cin >> website.adsShown;
    
    std::cout << "What percent of ads were clicked? \n";
    std::cin >> website.percentClicked;
    website.percentClicked = website.percentClicked * .01;
    
    std::cout << "How much money is each ad worth? \n";
    std::cin >> website.averageEarned;
    
    printValues(website);
    
    return 0;
    
}