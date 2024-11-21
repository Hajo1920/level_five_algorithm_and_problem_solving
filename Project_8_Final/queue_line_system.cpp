#include <iostream>
#include "./lib/queue_line_lib.h"

using namespace std;


int main(){
    clsQueueLine PayTicketQueue("P0", 10);
    clsQueueLine InternetSubscription("IN0", 3);

    PayTicketQueue.IssueTicket();
    PayTicketQueue.IssueTicket();
    PayTicketQueue.IssueTicket();

    // InternetSubscription.IssueTicket();
    // InternetSubscription.IssueTicket();
    // InternetSubscription.IssueTicket();
    // InternetSubscription.IssueTicket();
    // InternetSubscription.IssueTicket();
    // InternetSubscription.IssueTicket();

    // InternetSubscription.PrintTicketsLineLTR();
    //   std::cout << "\n\n";
    // InternetSubscription.PrintTicketsLineRTL();
    //   std::cout << "\n\n";
    // InternetSubscription.ServeNextClient();
    // InternetSubscription.ServeNextClient();

    // InternetSubscription.PrintTicketsLineLTR();
    //   std::cout << "\n\n";
    // InternetSubscription.PrintTicketsLineRTL();

    
    PayTicketQueue.PrintInfo();

    PayTicketQueue.PrintAllTickets();

    PayTicketQueue.PrintTicketsLineLTR();
    std::cout << "\n\n";
    PayTicketQueue.PrintTicketsLineRTL();

    PayTicketQueue.ServeNextClient();

    PayTicketQueue.PrintInfo();

    PayTicketQueue.PrintAllTickets();

    PayTicketQueue.PrintTicketsLineLTR();
    std::cout << "\n\n";
    PayTicketQueue.PrintTicketsLineRTL();
    return 0;
}