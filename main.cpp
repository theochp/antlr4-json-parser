#include <iostream>

#include "JSONLexer.h"
#include "JSONParser.h"
#include "MyJSONVisitor.h"

using namespace antlr4;
using namespace std;

int main(void) {
    ANTLRInputStream input("{\"prenom\":\"Jane\",\"nom\":\"Doe\",\"age\": 25,\"cheveux\":{\"couleur\": \"brun\",\"taille\": 30},\"animaux\": [\"chat\", \"chien\"],\"sex\": null, \"a\": [], \"b\": {}, \"c\": true,\"d\": false}");
    //ANTLRInputStream input("{\"prenom\":\"Jane\",\"nom\":\"Doe\",\"age\": 25,\"cheveux\":{\"couleur\": \"brun\",\"taille\": 30},\"animaux\": [\"chat\", \"chien\"]}");
    JSONLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    JSONParser parser(&tokens);
    tree::ParseTree *tree = parser.json();
    MyJSONVisitor visitor;
    visitor.visit(tree);

    return 0;
}