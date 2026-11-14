#pragma once


#include "../JuceLibraryCode/JuceHeader.h"
#include "../Listeners/ListenerInitializer.h"
class SIDestep;

class PatchTreeViewLeaf : public TreeViewItem
{
public:
    PatchTreeViewLeaf (
            std::shared_ptr < EventDispatcher > dispatcher
           ,
            /*ReferenceCountedObjectPtr<SIDestep>core, */String name
          , String                                              id
            );

    ~PatchTreeViewLeaf ();

    bool
        mightContainSubItems () override;

    void
        paintItem (
                Graphics& g
              , int       width
              , int       height
                ) override;

    void
        itemClicked (
                const MouseEvent& e
                ) override;

    String
        getName () const;

    String
        getID () const;

private:
    std::shared_ptr < EventDispatcher > dispatcher;
    //ReferenceCountedObjectPtr<SIDestep> core;
    String name;
    String id;
};
