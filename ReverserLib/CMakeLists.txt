project(ReverserLib VERSION 2.01)

configure_file(ReverserConfig.h.in ReverserConfig.h)

set(SOURCE_FILES
        pch.h
        ReverserApp.cpp ReverserApp.h
        MainFrame.cpp MainFrame.h
        Reverser.cpp Reverser.h
        Design.cpp Design.h
#        pcb/PCBView.cpp pcb/PCBView.h
#        schematic/SchematicPanel.cpp schematic/SchematicPanel.h
#        pcb/PCB.cpp pcb/PCB.h
#        dlg/PCBPropertiesDlg.cpp dlg/PCBPropertiesDlg.h
#        IModelObserver.h pcb/Layer.cpp pcb/Layer.h
#        dlg/PCBLayerDlg.cpp dlg/PCBLayerDlg.h
#        pcb/PCBPanel.cpp pcb/PCBPanel.h
#        components/Parts.cpp components/Parts.h
#        components/Layouts.cpp
#        components/Layouts.h components/Layout.cpp components/Layout.h
#        XmlHelper.cpp XmlHelper.h ReverserConst.h
#        components/Part.cpp components/Part.h
#        components/Symbols.cpp components/Symbols.h
#        dlg/PartAddDlg.cpp dlg/PartAddDlg.h
#        components/Component.cpp components/Component.h
#        dlg/ComponentPropertiesDlg.cpp dlg/ComponentPropertiesDlg.h
#        components/Components.cpp components/Components.h
#        Placement.cpp Placement.h
#        components/Attribute.cpp components/Attribute.h
#        components/LayoutComponent.cpp components/LayoutComponent.h
#        pcb/PCBContext.cpp pcb/PCBContext.h drawing/Drawable.cpp drawing/Drawable.h
#        drawing/SVG.cpp drawing/SVG.h network/Networks.cpp network/Networks.h
#        network/Network.cpp network/Network.h
#        dlg/NetworkPropertiesDlg.cpp dlg/NetworkPropertiesDlg.h
#        network/NetworkListBox.cpp network/NetworkListBox.h
        schematic/Schematic.cpp schematic/Schematic.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

target_include_directories(ReverserLib PUBLIC "${PROJECT_BINARY_DIR}")

target_precompile_headers(ReverserLib PUBLIC pch.h)