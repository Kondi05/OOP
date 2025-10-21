#include "BrowserHistory.h"

BrowserHistory::BrowserHistory() {
    currentPage = "home page";
}

void BrowserHistory::visitPage(std::string url) {
    // Save current page to history before navigating to new page
    if (!currentPage.empty()) {
        backHistory.push(currentPage);
    }
    currentPage = url;
}

void BrowserHistory::goBack() {
    if (canGoBack()) {
        currentPage = backHistory.top();  // Get the top element
        backHistory.pop();                // Remove it from stack
    }
    // If no history, do nothing
}

bool BrowserHistory::canGoBack() {
    return !backHistory.empty();
}

std::string BrowserHistory::getCurrentPage() {
    return currentPage;
}

int BrowserHistory::getBackHistorySize() {
    return backHistory.size();
}