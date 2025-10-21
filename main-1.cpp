#include <iostream>
#include "BrowserHistory.h"

using namespace std;

int main() {
    BrowserHistory browser;
    
    cout << "=== Browser History Test ===" << endl;
    
    // Test initial state
    cout << "Initial page: " << browser.getCurrentPage() << endl;
    cout << "Can go back? " << (browser.canGoBack() ? "Yes" : "No") << endl;
    cout << "History size: " << browser.getBackHistorySize() << endl;
    cout << endl;
    
    // Test visiting pages
    browser.visitPage("google.com");
    cout << "After visiting google.com: " << browser.getCurrentPage() << endl;
    cout << "History size: " << browser.getBackHistorySize() << endl;
    
    browser.visitPage("uni-adelaide.edu.au");
    cout << "After visiting uni-adelaide.edu.au: " << browser.getCurrentPage() << endl;
    cout << "History size: " << browser.getBackHistorySize() << endl;
    
    browser.visitPage("learn.uq.edu.au");
    cout << "After visiting learn.uq.edu.au: " << browser.getCurrentPage() << endl;
    cout << "History size: " << browser.getBackHistorySize() << endl;
    cout << endl;
    
    // Test going back
    browser.goBack();
    cout << "After going back once: " << browser.getCurrentPage() << endl;
    cout << "History size: " << browser.getBackHistorySize() << endl;
    
    browser.goBack();
    cout << "After going back twice: " << browser.getCurrentPage() << endl;
    cout << "History size: " << browser.getBackHistorySize() << endl;
    
    browser.goBack();
    cout << "After going back three times: " << browser.getCurrentPage() << endl;
    cout << "History size: " << browser.getBackHistorySize() << endl;
    
    // Test going back when no history
    browser.goBack();
    cout << "After trying to go back with no history: " << browser.getCurrentPage() << endl;
    
    return 0;
}