#ifndef DIALOGUE_H_INCLUDED
#define DIALOGUE_H_INCLUDED

namespace dialogue {
    class DialogueTree {
    public:
        DialogueTree();

        void init();
        void destroyTree();

        int performDialogue();
    private:
        vector<DialogueNode *> dialogueNodes;
    };
};

#endif // DIALOGUE_H_INCLUDED
