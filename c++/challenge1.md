"Order Book Simulator (Lite)"
🔧 Overview:
You’ll write a simple C++ program that accepts limit buy/sell orders from standard input and maintains a view of the current best bid and ask.

💡 Concepts You’ll Practice (from a JS dev's POV):
JavaScript	C++
Objects / Classes	class, constructors, access modifiers
Arrays / Maps	std::vector, std::map, std::priority_queue
Arrow functions / Callbacks	Lambdas
Console.log	std::cout
JSON-ish data	Structs and I/O
Dynamic types	Type safety and strong typing

✅ Requirements:
1. Parse user input:
bash
Copy
Edit
BUY 100.5 10
SELL 101.0 5
2. Track orders:
Each order is stored in a simple struct:

cpp
Copy
Edit
struct Order {
    int id;
    std::string side; // "BUY" or "SELL"
    double price;
    int quantity;
};
3. Match engine (simplified):
If a buy price >= lowest sell price → match.

If a sell price <= highest buy price → match.

Otherwise, store it.

4. Output state:
Print best bid/ask after each command:

yaml
Copy
Edit
Best Bid: 100.5 x 10
Best Ask: 101.0 x 5
🔨 Tools You Can Use:
std::vector to store unmatched orders

std::sort to sort buy/sell queues by price

std::getline(std::cin, line) for input

std::stringstream to parse input

std::map<double, int> to track aggregated quantities per price (optional)

🕐 Time Limit:
Aim for 3-4 hours total:

1 hour reading and prototyping syntax

2-3 hours coding, debugging, and printing the order book

