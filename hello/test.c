#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct ExchangeRateNode {
    char currency[4]; // Assuming 3-letter currency codes
    float rate;
    struct ExchangeRateNode* next;
};

// Function to add a new exchange rate node to the linked list
void addExchangeRate(struct ExchangeRateNode** head, char currency[4], float rate) {
    struct ExchangeRateNode* newNode = (struct ExchangeRateNode*)malloc(sizeof(struct ExchangeRateNode));
    if (!newNode) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Copy the currency code
    strncpy(newNode->currency, currency, sizeof(newNode->currency) - 1);
    newNode->currency[3] = '\0';

    newNode->rate = rate;
    newNode->next = *head;
    *head = newNode;
}

// Function to convert currency using linked list
float convertCurrency(struct ExchangeRateNode* head, char fromCurrency[4], char toCurrency[4], float amount) {
    struct ExchangeRateNode* fromNode = NULL;
    struct ExchangeRateNode* toNode = NULL;

    // Find the exchange rates for the specified currencies
    do{
    for (struct ExchangeRateNode* current = head; current != NULL; current = current->next) {
        if (strcmp(current->currency, fromCurrency) == 0) {
            fromNode = current;
        } else if (strcmp(current->currency, toCurrency) == 0) {
            toNode = current;
        }
             if (!fromNode || !toNode)
    {
        fprintf(stderr, "Exchange rates not found for specified currencies\n");
        exit(EXIT_FAILURE);

    }
    
    }

    while (!fromNode || !toNode)

    }

    // Perform the currency conversion
    return amount * (toNode->rate / fromNode->rate);
}

// Function to free the memory allocated for the linked list
void freeExchangeRates(struct ExchangeRateNode* head) {
    while (head != NULL) {
        struct ExchangeRateNode* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct ExchangeRateNode* exchangeRates = NULL;

    // Populate the linked list with some exchange rates
    addExchangeRate(&exchangeRates, "USD", 1.0);
    addExchangeRate(&exchangeRates, "EUR", 0.85);
    addExchangeRate(&exchangeRates, "GBP", 0.75);

    // Get user input for conversion
    char fromCurrency[4], toCurrency[4];
    float amount;

    printf("Enter the source currency (e.g., USD): ");
    scanf("%3s", fromCurrency);

    printf("Enter the target currency (e.g., EUR): ");
    scanf("%3s", toCurrency);

    printf("Enter the amount to convert: ");
    scanf("%f", &amount);

    // Perform the currency conversion using linked list
    float convertedAmount = convertCurrency(exchangeRates, fromCurrency, toCurrency, amount);

    // Display the result
    printf("%.2f %s is %.2f %s\n", amount, fromCurrency, convertedAmount, toCurrency);

    // Free the allocated memory for the linked list
    freeExchangeRates(exchangeRates);

    return 0;
}