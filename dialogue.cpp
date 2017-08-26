/*
    CPPXMLRPG
	XML-powered text adventure game engine written in C++ for console window
    by Josh Maines.

*/
#include <string>
#include <iostream>
#include <vector>
#include <dialogue.h>

using namespace std;

namespace dialogue {
    class DialogueNode;

    class DialogueOption {
    public:
        DialogueOption(string Text, int ReturnCode, DialogueNode *NextNode);

        string text;
        int returnCode;
        DialogueNode *nextNode;
    };

    class DialogueNode {
    public:
        DialogueNode(string Text);

        string text;
        vector <DialogueOption> dialogueOptions;
    };

    class DialogueTree {
    public:
        DialogueTree();

        void init();
        void destroyTree();

        int performDialogue();
    private:
        vector<DialogueNode *> dialogueNodes;
    };

    DialogueOption::DialogueOption(string Text, int ReturnCode, DialogueNode *NextNode) {
        text = Text;
        returnCode = ReturnCode;
        nextNode = NextNode;
    };
};
