project(ReverserLib VERSION 2.01)

configure_file(ReverserConfig.h.in ReverserConfig.h)

set(SOURCE_FILES
        pch.h
        ReverserApp.cpp ReverserApp.h
        MainFrame.cpp MainFrame.h
        Reverser.cpp Reverser.h
        design/Design.cpp design/Design.h
        pcb/PCB.cpp pcb/PCB.h
        pcb/PCBPanel.cpp pcb/PCBPanel.h
        pcb/PCBContext.cpp pcb/PCBContext.h
        pcb/Layer.cpp pcb/Layer.h
        pcb/PCBView.cpp pcb/PCBView.h
        IModelObserver.h
        dlg/PCBPropertiesDlg.cpp dlg/PCBPropertiesDlg.h
        dlg/PCBLayerDlg.cpp dlg/PCBLayerDlg.h
        XmlHelper.cpp XmlHelper.h
        schematic/Schematic.cpp schematic/Schematic.h
        design/DesignPropertiesDlg.cpp design/DesignPropertiesDlg.h
        EagleDOM.cpp EagleDOM.h
        board/Board.cpp board/Board.h
        PathHelper.cpp PathHelper.h
        parts/Package.cpp parts/Package.h
        parts/Primitive.cpp parts/Primitive.h
        parts/Pad.cpp parts/Pad.h
        parts/Packages.cpp parts/Packages.h
        parts/Elements.cpp parts/Elements.h
        parts/Element.cpp parts/Element.h
        parts/Attribute.cpp parts/Attribute.h
        GraphicsHelper.cpp GraphicsHelper.h
        parts/Wire.cpp parts/Wire.h
        parts/Text.cpp parts/Text.h
        parts/Symbols.cpp parts/Symbols.h
        parts/Symbol.cpp parts/Symbol.h
        parts/LibraryItem.cpp parts/LibraryItem.h
        parts/DeviceSets.cpp parts/DeviceSets.h
        parts/DeviceSet.cpp parts/DeviceSet.h
        parts/Device.cpp parts/Device.h
        parts/Gate.cpp parts/Gate.h
        parts/Pin.cpp parts/Pin.h
        parts/Parts.cpp parts/Parts.h
        parts/Part.cpp parts/Part.h
        parts/Instance.cpp parts/Instance.h network/Nets.cpp network/Nets.h network/Net.cpp network/Net.h network/Segment.cpp network/Segment.h parts/Junction.cpp parts/Junction.h network/PinRef.cpp network/PinRef.h)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

target_include_directories(ReverserLib PUBLIC "${PROJECT_BINARY_DIR}")

target_precompile_headers(ReverserLib PUBLIC pch.h)