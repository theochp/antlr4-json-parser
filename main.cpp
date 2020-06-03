#include <iostream>

#include "JSONLexer.h"
#include "JSONParser.h"
#include "MyJSONVisitor.h"

using namespace antlr4;
using namespace std;

int main(void) {
    ANTLRInputStream input("{\r\n    \"prenom\":\"Jane\",\r\n    \"nom\":\"Doe\",\r\n    \"age\": 25,\r\n    \"cheveux\":{\r\n        \"couleur\": \"brun\",\r\n        \"taille\": 30\r\n    },\r\n    \"animaux\": [\"chat\", \"chien\"]\r\n}");
    JSONLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    JSONParser parser(&tokens);
    tree::ParseTree *tree = parser.json();
    MyJSONVisitor visitor;
    visitor.visit(tree);

    return 0;
}