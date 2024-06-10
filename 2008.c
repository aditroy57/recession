#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void simulateCrisis();

int main() {
    simulateCrisis();
    return 0;
}

int error;
int error1;
void simulateCrisis() {
    // Seed random number generator
    srand(time(NULL));

    // Generate random dates
    int startDate = rand() % 10 + 1;
    int endDate = rand() % 15 + 1;

    // Welcome message
    printf("Welcome to the 2008 Financial Crisis Simulator!\nToday's date is June %d, 2007.\nPlease select a bank you would like to invest with.\n\n", startDate);

    // List of banks and descriptions
    char *banks[] = {
        "Lehman Brothers",
        "Bear Stearns",
        "JPMorgan Chase",
        "Goldman Sachs",
        "Washington Mutual",
        "Morgan Stanley",
        "Bank of America",
        "CIBC",
        "RBC",
        "Scotiabank",
        "BMO"
    };

    char *bankDesc[] = {
        "Lehman Brothers - A global financial services firm.",
        "Bear Stearns - A major investment bank and securities trading firm.",
        "JPMorgan Chase - One of the largest banks in the world.",
        "Goldman Sachs - A leading global investment banking firm.",
        "Washington Mutual - A savings bank holding company.",
        "Morgan Stanley - A multinational investment bank and financial services company.",
        "Bank of America - A multinational investment bank and financial services company.",
        "CIBC - A Canadian multinational banking and financial services corporation.",
        "RBC - The largest bank in Canada by market capitalization.",
        "Scotiabank - A Canadian multinational banking and financial services company.",
        "BMO - A Canadian multinational investment bank and financial services company."
    };

    // Display banks
    for(int i = 0; i < 11; i++) {
        printf("%d. %s\n", i + 1, bankDesc[i]);
    }

    // Choose bank
    int bankChoice;
    printf("\nEnter the number of the bank you want to invest with: ");
    error = scanf("%d", &bankChoice);

    // List of securities and descriptions
    char *securities[] = {
        "MBS",
        "S&P 500",
        "Nasdaq",
        "Microsoft",
        "Cisco",
        "Intel",
        "Apple",
        "Netflix",
        "Google"
    };

    char *secDesc[] = {
        "MBS - Mortgage Backed Security, a very safe investment backed by real estate!",
        "S&P 500 - A stock market index tracking the performance of 500 large companies.",
        "Nasdaq - A global electronic marketplace for buying and selling securities.",
        "Microsoft - A leading technology company.",
        "Cisco - A multinational technology conglomerate.",
        "Intel - A major player in the semiconductor industry.",
        "Apple - One of the largest technology companies in the world.",
        "Netflix - A leading streaming service provider.",
        "Google - A giant in the technology and internet sector."
    };

    // Display securities
    printf("\nYou are too broke to invest in more than one security.\nPlease select one security to invest in by inputting the number:\n");
    for(int i = 0; i < 9; i++) {
        printf("%d. %s\n", i + 1, secDesc[i]);
    }

    // Choose security
    int secChoice;
    printf("\nEnter the number of the security you want to invest in: ");
    error1 = scanf("%d", &secChoice);

    // Results message
    printf("\nWelcome back! The date is now February %d, 2009.\nYou have held your securities up to this point, and decide to check on your earnings about two years later.\n\n", endDate);
    printf("Here is your portfolio:\n");

    // Check if bank failed
    if(bankChoice == 1 || bankChoice == 2 || bankChoice == 5) {
        printf("You lost all your money because you chose a bank that tried to cheat the system and was too greedy!\nIt doesn't matter what security you chose because your bank became bankrupt and you lost all your money.\nwomp womp better luck next time\n");
    } else {
        printf("Congrclearatulations, your bank was reliable and was able to survive the recession!\nLet's see how your securities are!\n\n");
        if(secChoice == 1) {
            printf("You lost all your money!\nYour bank was reliable, but you invested in a risky security that many banks displayed as 'safe'!\nUr broke af now.\n");
        } else {
            // Calculate random loss percentage
            int lossPercentage = rand() % 21 + 30;
            printf("You lost %d%% of your investment in %s.\n", lossPercentage, securities[secChoice - 1]);
            printf("\nIf you are seeing this screen, that means you survived the 2008 financial crisis!\nGood job, you are great at making predictions and making safe investments!\n");
        }
    }
}
