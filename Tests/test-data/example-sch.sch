<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="9.7.0">
    <drawing>
        <settings>
            <setting alwaysvectorfont="no"/>
            <setting verticaltext="up"/>
        </settings>
        <grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01"
              altunitdist="inch" altunit="inch"/>
        <layers>
            <layer number="1" name="Top" color="4" fill="1" visible="no" active="no"/>
            <layer number="2" name="Route2" color="16" fill="1" visible="no" active="no"/>
            <layer number="3" name="Route3" color="17" fill="1" visible="no" active="no"/>
            <layer number="4" name="Route4" color="18" fill="1" visible="no" active="no"/>
            <layer number="5" name="Route5" color="19" fill="1" visible="no" active="no"/>
            <layer number="6" name="Route6" color="25" fill="1" visible="no" active="no"/>
            <layer number="7" name="Route7" color="26" fill="1" visible="no" active="no"/>
            <layer number="8" name="Route8" color="27" fill="1" visible="no" active="no"/>
            <layer number="9" name="Route9" color="28" fill="1" visible="no" active="no"/>
            <layer number="10" name="Route10" color="29" fill="1" visible="no" active="no"/>
            <layer number="11" name="Route11" color="30" fill="1" visible="no" active="no"/>
            <layer number="12" name="Route12" color="20" fill="1" visible="no" active="no"/>
            <layer number="13" name="Route13" color="21" fill="1" visible="no" active="no"/>
            <layer number="14" name="Route14" color="22" fill="1" visible="no" active="no"/>
            <layer number="15" name="Route15" color="23" fill="1" visible="no" active="no"/>
            <layer number="16" name="Bottom" color="1" fill="1" visible="no" active="no"/>
            <layer number="17" name="Pads" color="2" fill="1" visible="no" active="no"/>
            <layer number="18" name="Vias" color="2" fill="1" visible="no" active="no"/>
            <layer number="19" name="Unrouted" color="6" fill="1" visible="no" active="no"/>
            <layer number="20" name="Dimension" color="24" fill="1" visible="no" active="no"/>
            <layer number="21" name="tPlace" color="7" fill="1" visible="no" active="no"/>
            <layer number="22" name="bPlace" color="7" fill="1" visible="no" active="no"/>
            <layer number="23" name="tOrigins" color="15" fill="1" visible="no" active="no"/>
            <layer number="24" name="bOrigins" color="15" fill="1" visible="no" active="no"/>
            <layer number="25" name="tNames" color="7" fill="1" visible="no" active="no"/>
            <layer number="26" name="bNames" color="7" fill="1" visible="no" active="no"/>
            <layer number="27" name="tValues" color="7" fill="1" visible="no" active="no"/>
            <layer number="28" name="bValues" color="7" fill="1" visible="no" active="no"/>
            <layer number="29" name="tStop" color="7" fill="3" visible="no" active="no"/>
            <layer number="30" name="bStop" color="7" fill="6" visible="no" active="no"/>
            <layer number="31" name="tCream" color="7" fill="4" visible="no" active="no"/>
            <layer number="32" name="bCream" color="7" fill="5" visible="no" active="no"/>
            <layer number="33" name="tFinish" color="6" fill="3" visible="no" active="no"/>
            <layer number="34" name="bFinish" color="6" fill="6" visible="no" active="no"/>
            <layer number="35" name="tGlue" color="7" fill="4" visible="no" active="no"/>
            <layer number="36" name="bGlue" color="7" fill="5" visible="no" active="no"/>
            <layer number="37" name="tTest" color="7" fill="1" visible="no" active="no"/>
            <layer number="38" name="bTest" color="7" fill="1" visible="no" active="no"/>
            <layer number="39" name="tKeepout" color="4" fill="11" visible="no" active="no"/>
            <layer number="40" name="bKeepout" color="1" fill="11" visible="no" active="no"/>
            <layer number="41" name="tRestrict" color="4" fill="10" visible="no" active="no"/>
            <layer number="42" name="bRestrict" color="1" fill="10" visible="no" active="no"/>
            <layer number="43" name="vRestrict" color="2" fill="10" visible="no" active="no"/>
            <layer number="44" name="Drills" color="7" fill="1" visible="no" active="no"/>
            <layer number="45" name="Holes" color="7" fill="1" visible="no" active="no"/>
            <layer number="46" name="Milling" color="3" fill="1" visible="no" active="no"/>
            <layer number="47" name="Measures" color="7" fill="1" visible="no" active="no"/>
            <layer number="48" name="Document" color="7" fill="1" visible="no" active="no"/>
            <layer number="49" name="Reference" color="7" fill="1" visible="no" active="no"/>
            <layer number="50" name="dxf" color="7" fill="1" visible="no" active="no"/>
            <layer number="51" name="tDocu" color="7" fill="1" visible="no" active="no"/>
            <layer number="52" name="bDocu" color="7" fill="1" visible="no" active="no"/>
            <layer number="53" name="tGND_GNDA" color="7" fill="1" visible="no" active="no"/>
            <layer number="54" name="bGND_GNDA" color="7" fill="1" visible="no" active="no"/>
            <layer number="56" name="wert" color="7" fill="1" visible="no" active="no"/>
            <layer number="57" name="tCAD" color="7" fill="1" visible="no" active="no"/>
            <layer number="59" name="tCarbon" color="7" fill="1" visible="no" active="no"/>
            <layer number="60" name="bCarbon" color="7" fill="1" visible="no" active="no"/>
            <layer number="88" name="SimResults" color="9" fill="1" visible="yes" active="yes"/>
            <layer number="89" name="SimProbes" color="9" fill="1" visible="yes" active="yes"/>
            <layer number="90" name="Modules" color="5" fill="1" visible="yes" active="yes"/>
            <layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
            <layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
            <layer number="93" name="Pins" color="2" fill="1" visible="no" active="yes"/>
            <layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
            <layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
            <layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
            <layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
            <layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
            <layer number="99" name="SpiceOrder" color="7" fill="1" visible="no" active="yes"/>
        </layers>
        <schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
            <libraries>
                <library name="owen-library" urn="urn:adsk.wipprod:fs.file:vf.frPKTRgnS7OtKRM0piDRaQ">
                    <packages>
                        <package name="DIP1524W53P254L5283H508Q40B" library_version="2">
                            <description>40-DIP, 2.54 mm (0.10 in) pitch, 15.24 mm (0.60 in) span, 52.83 X 13.72 X 5.08
                                mm body
                                &lt;p&gt;40-pin DIP package with 2.54 mm (0.10 in) pitch, 15.24 mm (0.60 in) span with
                                body size 52.83 X 13.72 X 5.08 mm&lt;/p&gt;
                            </description>
                            <pad name="1" x="-7.62" y="24.13" drill="0.7434" diameter="1.3434"/>
                            <pad name="2" x="-7.62" y="21.59" drill="0.7434" diameter="1.3434"/>
                            <pad name="3" x="-7.62" y="19.05" drill="0.7434" diameter="1.3434"/>
                            <pad name="4" x="-7.62" y="16.51" drill="0.7434" diameter="1.3434"/>
                            <pad name="5" x="-7.62" y="13.97" drill="0.7434" diameter="1.3434"/>
                            <pad name="6" x="-7.62" y="11.43" drill="0.7434" diameter="1.3434"/>
                            <pad name="7" x="-7.62" y="8.89" drill="0.7434" diameter="1.3434"/>
                            <pad name="8" x="-7.62" y="6.35" drill="0.7434" diameter="1.3434"/>
                            <pad name="9" x="-7.62" y="3.81" drill="0.7434" diameter="1.3434"/>
                            <pad name="10" x="-7.62" y="1.27" drill="0.7434" diameter="1.3434"/>
                            <pad name="11" x="-7.62" y="-1.27" drill="0.7434" diameter="1.3434"/>
                            <pad name="12" x="-7.62" y="-3.81" drill="0.7434" diameter="1.3434"/>
                            <pad name="13" x="-7.62" y="-6.35" drill="0.7434" diameter="1.3434"/>
                            <pad name="14" x="-7.62" y="-8.89" drill="0.7434" diameter="1.3434"/>
                            <pad name="15" x="-7.62" y="-11.43" drill="0.7434" diameter="1.3434"/>
                            <pad name="16" x="-7.62" y="-13.97" drill="0.7434" diameter="1.3434"/>
                            <pad name="17" x="-7.62" y="-16.51" drill="0.7434" diameter="1.3434"/>
                            <pad name="18" x="-7.62" y="-19.05" drill="0.7434" diameter="1.3434"/>
                            <pad name="19" x="-7.62" y="-21.59" drill="0.7434" diameter="1.3434"/>
                            <pad name="20" x="-7.62" y="-24.13" drill="0.7434" diameter="1.3434"/>
                            <pad name="21" x="7.62" y="-24.13" drill="0.7434" diameter="1.3434"/>
                            <pad name="22" x="7.62" y="-21.59" drill="0.7434" diameter="1.3434"/>
                            <pad name="23" x="7.62" y="-19.05" drill="0.7434" diameter="1.3434"/>
                            <pad name="24" x="7.62" y="-16.51" drill="0.7434" diameter="1.3434"/>
                            <pad name="25" x="7.62" y="-13.97" drill="0.7434" diameter="1.3434"/>
                            <pad name="26" x="7.62" y="-11.43" drill="0.7434" diameter="1.3434"/>
                            <pad name="27" x="7.62" y="-8.89" drill="0.7434" diameter="1.3434"/>
                            <pad name="28" x="7.62" y="-6.35" drill="0.7434" diameter="1.3434"/>
                            <pad name="29" x="7.62" y="-3.81" drill="0.7434" diameter="1.3434"/>
                            <pad name="30" x="7.62" y="-1.27" drill="0.7434" diameter="1.3434"/>
                            <pad name="31" x="7.62" y="1.27" drill="0.7434" diameter="1.3434"/>
                            <pad name="32" x="7.62" y="3.81" drill="0.7434" diameter="1.3434"/>
                            <pad name="33" x="7.62" y="6.35" drill="0.7434" diameter="1.3434"/>
                            <pad name="34" x="7.62" y="8.89" drill="0.7434" diameter="1.3434"/>
                            <pad name="35" x="7.62" y="11.43" drill="0.7434" diameter="1.3434"/>
                            <pad name="36" x="7.62" y="13.97" drill="0.7434" diameter="1.3434"/>
                            <pad name="37" x="7.62" y="16.51" drill="0.7434" diameter="1.3434"/>
                            <pad name="38" x="7.62" y="19.05" drill="0.7434" diameter="1.3434"/>
                            <pad name="39" x="7.62" y="21.59" drill="0.7434" diameter="1.3434"/>
                            <pad name="40" x="7.62" y="24.13" drill="0.7434" diameter="1.3434"/>
                            <circle x="-8.7957" y="24.13" radius="0.25" width="0" layer="21"/>
                            <wire x1="-6.86" y1="25.0557" x2="-6.86" y2="26.415" width="0.12" layer="21"/>
                            <wire x1="-6.86" y1="26.415" x2="6.86" y2="26.415" width="0.12" layer="21"/>
                            <wire x1="6.86" y1="26.415" x2="6.86" y2="25.0557" width="0.12" layer="21"/>
                            <wire x1="-6.86" y1="-25.0557" x2="-6.86" y2="-26.415" width="0.12" layer="21"/>
                            <wire x1="-6.86" y1="-26.415" x2="6.86" y2="-26.415" width="0.12" layer="21"/>
                            <wire x1="6.86" y1="-26.415" x2="6.86" y2="-25.0557" width="0.12" layer="21"/>
                            <wire x1="-6.86" y1="-26.415" x2="-6.86" y2="26.415" width="0.12" layer="51"/>
                            <wire x1="-6.86" y1="26.415" x2="6.86" y2="26.415" width="0.12" layer="51"/>
                            <wire x1="6.86" y1="26.415" x2="6.86" y2="-26.415" width="0.12" layer="51"/>
                            <wire x1="6.86" y1="-26.415" x2="-6.86" y2="-26.415" width="0.12" layer="51"/>
                            <text x="0" y="27.05" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-27.05" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="DIL16" urn="urn:adsk.eagle:footprint:917/1" library_version="15">
                            <description>&lt;b&gt;Dual In Line Package&lt;/b&gt;</description>
                            <wire x1="10.16" y1="2.921" x2="-10.16" y2="2.921" width="0.1524" layer="21"/>
                            <wire x1="-10.16" y1="-2.921" x2="10.16" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="10.16" y1="2.921" x2="10.16" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="-10.16" y1="2.921" x2="-10.16" y2="1.016" width="0.1524" layer="21"/>
                            <wire x1="-10.16" y1="-2.921" x2="-10.16" y2="-1.016" width="0.1524" layer="21"/>
                            <wire x1="-10.16" y1="1.016" x2="-10.16" y2="-1.016" width="0.1524" layer="21"
                                  curve="-180"/>
                            <pad name="1" x="-8.89" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="2" x="-6.35" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="7" x="6.35" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="8" x="8.89" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="3" x="-3.81" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="4" x="-1.27" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="6" x="3.81" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="5" x="1.27" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="9" x="8.89" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="10" x="6.35" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="11" x="3.81" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="12" x="1.27" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="13" x="-1.27" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="14" x="-3.81" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="15" x="-6.35" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="16" x="-8.89" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <text x="-10.541" y="-2.921" size="1.27" layer="25" ratio="10" rot="R90">&gt;NAME</text>
                            <text x="-7.493" y="-0.635" size="1.27" layer="27" ratio="10">&gt;VALUE</text>
                        </package>
                        <package name="DIL14" urn="urn:adsk.eagle:footprint:16136/1" library_version="7">
                            <description>&lt;b&gt;Dual In Line Package&lt;/b&gt;</description>
                            <wire x1="8.89" y1="2.921" x2="-8.89" y2="2.921" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="-2.921" x2="8.89" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="8.89" y1="2.921" x2="8.89" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="2.921" x2="-8.89" y2="1.016" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="-2.921" x2="-8.89" y2="-1.016" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="1.016" x2="-8.89" y2="-1.016" width="0.1524" layer="21" curve="-180"/>
                            <pad name="1" x="-7.62" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="2" x="-5.08" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="7" x="7.62" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="8" x="7.62" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="3" x="-2.54" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="4" x="0" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="6" x="5.08" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="5" x="2.54" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="9" x="5.08" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="10" x="2.54" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="11" x="0" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="12" x="-2.54" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="13" x="-5.08" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="14" x="-7.62" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <text x="-9.271" y="-3.048" size="1.27" layer="25" ratio="10" rot="R90">&gt;NAME</text>
                            <text x="-6.731" y="-0.635" size="1.27" layer="27" ratio="10">&gt;VALUE</text>
                        </package>
                        <package name="TESTPOINT" library_version="13">
                            <pad name="P$1" x="0" y="0" drill="0.6"/>
                        </package>
                    </packages>
                    <packages3d>
                        <package3d name="DIL14" urn="urn:adsk.eagle:package:16407/2" type="model" library_version="7">
                            <description>Dual In Line Package</description>
                            <packageinstances>
                                <packageinstance name="DIL14"/>
                            </packageinstances>
                        </package3d>
                    </packages3d>
                    <symbols>
                        <symbol name="HD6821P" library_version="18">
                            <pin name="!IRQA" x="-15.24" y="25.4" length="middle" direction="out"/>
                            <pin name="D0" x="-15.24" y="20.32" length="middle"/>
                            <pin name="D1" x="-15.24" y="17.78" length="middle"/>
                            <pin name="D2" x="-15.24" y="15.24" length="middle"/>
                            <pin name="D3" x="-15.24" y="12.7" length="middle"/>
                            <pin name="D4" x="-15.24" y="10.16" length="middle"/>
                            <pin name="D5" x="-15.24" y="7.62" length="middle"/>
                            <pin name="D6" x="-15.24" y="5.08" length="middle"/>
                            <pin name="D7" x="-15.24" y="2.54" length="middle"/>
                            <pin name="CS0" x="-15.24" y="-2.54" length="middle" direction="in"/>
                            <pin name="CS1" x="-15.24" y="-5.08" length="middle" direction="in"/>
                            <pin name="!CS2" x="-15.24" y="-7.62" length="middle"/>
                            <pin name="RS0" x="-15.24" y="-10.16" length="middle"/>
                            <pin name="RS1" x="-15.24" y="-12.7" length="middle"/>
                            <pin name="R/!W" x="-15.24" y="-15.24" length="middle"/>
                            <pin name="ENABLE" x="-15.24" y="-17.78" length="middle"/>
                            <pin name="!RESET" x="-15.24" y="-20.32" length="middle"/>
                            <pin name="!IRQB" x="-15.24" y="-25.4" length="middle"/>
                            <pin name="CA1" x="15.24" y="25.4" length="middle" direction="in" rot="R180"/>
                            <pin name="CA2" x="15.24" y="22.86" length="middle" rot="R180"/>
                            <pin name="PA0" x="15.24" y="17.78" length="middle" rot="R180"/>
                            <pin name="PA1" x="15.24" y="15.24" length="middle" rot="R180"/>
                            <pin name="PA2" x="15.24" y="12.7" length="middle" rot="R180"/>
                            <pin name="PA3" x="15.24" y="10.16" length="middle" rot="R180"/>
                            <pin name="PA4" x="15.24" y="7.62" length="middle" rot="R180"/>
                            <pin name="PA5" x="15.24" y="5.08" length="middle" rot="R180"/>
                            <pin name="PA6" x="15.24" y="2.54" length="middle" rot="R180"/>
                            <pin name="PA7" x="15.24" y="0" length="middle" rot="R180"/>
                            <pin name="PB0" x="15.24" y="-5.08" length="middle" rot="R180"/>
                            <pin name="PB1" x="15.24" y="-7.62" length="middle" rot="R180"/>
                            <pin name="PB2" x="15.24" y="-10.16" length="middle" rot="R180"/>
                            <pin name="PB3" x="15.24" y="-12.7" length="middle" rot="R180"/>
                            <pin name="PB4" x="15.24" y="-15.24" length="middle" rot="R180"/>
                            <pin name="PB5" x="15.24" y="-17.78" length="middle" rot="R180"/>
                            <pin name="PB6" x="15.24" y="-20.32" length="middle" rot="R180"/>
                            <pin name="PB7" x="15.24" y="-22.86" length="middle" rot="R180"/>
                            <pin name="CB1" x="15.24" y="-27.94" length="middle" direction="in" rot="R180"/>
                            <pin name="CB2" x="15.24" y="-30.48" length="middle" rot="R180"/>
                            <wire x1="-10.16" y1="27.94" x2="-10.16" y2="-33.02" width="0.1524" layer="94"/>
                            <wire x1="-10.16" y1="-33.02" x2="10.16" y2="-33.02" width="0.1524" layer="94"/>
                            <wire x1="10.16" y1="-33.02" x2="10.16" y2="27.94" width="0.1524" layer="94"/>
                            <wire x1="10.16" y1="27.94" x2="-10.16" y2="27.94" width="0.1524" layer="94"/>
                            <text x="-5.08" y="30.48" size="1.778" layer="95">&gt;NAME</text>
                            <text x="-5.08" y="-35.56" size="1.778" layer="96">&gt;VALUE</text>
                        </symbol>
                        <symbol name="DIP16SOCKET" library_version="18">
                            <pin name="1" x="-12.7" y="7.62" length="middle"/>
                            <pin name="2" x="-12.7" y="5.08" length="middle"/>
                            <pin name="3" x="-12.7" y="2.54" length="middle"/>
                            <pin name="4" x="-12.7" y="0" length="middle"/>
                            <pin name="5" x="-12.7" y="-2.54" length="middle"/>
                            <pin name="6" x="-12.7" y="-5.08" length="middle"/>
                            <pin name="7" x="-12.7" y="-7.62" length="middle"/>
                            <pin name="8" x="-12.7" y="-10.16" length="middle"/>
                            <pin name="9" x="12.7" y="-10.16" length="middle" rot="R180"/>
                            <pin name="10" x="12.7" y="-7.62" length="middle" rot="R180"/>
                            <pin name="11" x="12.7" y="-5.08" length="middle" rot="R180"/>
                            <pin name="12" x="12.7" y="-2.54" length="middle" rot="R180"/>
                            <pin name="13" x="12.7" y="0" length="middle" rot="R180"/>
                            <pin name="14" x="12.7" y="2.54" length="middle" rot="R180"/>
                            <pin name="15" x="12.7" y="5.08" length="middle" rot="R180"/>
                            <pin name="16" x="12.7" y="7.62" length="middle" rot="R180"/>
                            <wire x1="-7.62" y1="10.16" x2="-7.62" y2="-12.7" width="0.254" layer="94"/>
                            <wire x1="-7.62" y1="-12.7" x2="7.62" y2="-12.7" width="0.254" layer="94"/>
                            <wire x1="7.62" y1="-12.7" x2="7.62" y2="10.16" width="0.254" layer="94"/>
                            <wire x1="7.62" y1="10.16" x2="-7.62" y2="10.16" width="0.254" layer="94"/>
                            <text x="-5.08" y="12.7" size="1.778" layer="95">&gt;NAME</text>
                            <text x="-5.08" y="-15.24" size="1.778" layer="96">&gt;VALUE</text>
                        </symbol>
                        <symbol name="15836" library_version="7">
                            <wire x1="-5.08" y1="5.08" x2="5.08" y2="0" width="0.4064" layer="94"/>
                            <wire x1="5.08" y1="0" x2="-5.08" y2="-5.08" width="0.4064" layer="94"/>
                            <wire x1="-5.08" y1="-5.08" x2="-5.08" y2="5.08" width="0.4064" layer="94"/>
                            <text x="2.54" y="3.175" size="1.778" layer="95">&gt;NAME</text>
                            <text x="2.54" y="-5.08" size="1.778" layer="96">&gt;VALUE</text>
                            <pin name="I" x="-10.16" y="0" visible="pad" length="middle" direction="in"/>
                            <pin name="O" x="10.16" y="0" visible="pad" length="middle" direction="out" function="dot"
                                 rot="R180"/>
                        </symbol>
                        <symbol name="PWRN" library_version="7">
                            <text x="-0.635" y="-0.635" size="1.778" layer="95">&gt;NAME</text>
                            <text x="1.905" y="-5.842" size="1.27" layer="95" rot="R90">GND</text>
                            <text x="1.905" y="2.54" size="1.27" layer="95" rot="R90">VCC</text>
                            <pin name="GND" x="0" y="-7.62" visible="pad" length="middle" direction="pwr" rot="R90"/>
                            <pin name="VCC" x="0" y="7.62" visible="pad" length="middle" direction="pwr" rot="R270"/>
                        </symbol>
                        <symbol name="TESTPOINT" library_version="13">
                            <pin name="TP" x="0" y="0" visible="off" length="middle" rot="R90"/>
                            <text x="-2.54" y="5.08" size="1.27" layer="95">&gt;NAME</text>
                        </symbol>
                    </symbols>
                    <devicesets>
                        <deviceset name="HD6821P" prefix="U" library_version="18">
                            <gates>
                                <gate name="1" symbol="HD6821P" x="10.16" y="5.08"/>
                            </gates>
                            <devices>
                                <device name="" package="DIP1524W53P254L5283H508Q40B">
                                    <connects>
                                        <connect gate="1" pin="!CS2" pad="23"/>
                                        <connect gate="1" pin="!IRQA" pad="38"/>
                                        <connect gate="1" pin="!IRQB" pad="37"/>
                                        <connect gate="1" pin="!RESET" pad="34"/>
                                        <connect gate="1" pin="CA1" pad="40"/>
                                        <connect gate="1" pin="CA2" pad="39"/>
                                        <connect gate="1" pin="CB1" pad="18"/>
                                        <connect gate="1" pin="CB2" pad="19"/>
                                        <connect gate="1" pin="CS0" pad="22"/>
                                        <connect gate="1" pin="CS1" pad="24"/>
                                        <connect gate="1" pin="D0" pad="33"/>
                                        <connect gate="1" pin="D1" pad="32"/>
                                        <connect gate="1" pin="D2" pad="31"/>
                                        <connect gate="1" pin="D3" pad="30"/>
                                        <connect gate="1" pin="D4" pad="29"/>
                                        <connect gate="1" pin="D5" pad="28"/>
                                        <connect gate="1" pin="D6" pad="27"/>
                                        <connect gate="1" pin="D7" pad="26"/>
                                        <connect gate="1" pin="ENABLE" pad="25"/>
                                        <connect gate="1" pin="PA0" pad="2"/>
                                        <connect gate="1" pin="PA1" pad="3"/>
                                        <connect gate="1" pin="PA2" pad="4"/>
                                        <connect gate="1" pin="PA3" pad="5"/>
                                        <connect gate="1" pin="PA4" pad="6"/>
                                        <connect gate="1" pin="PA5" pad="7"/>
                                        <connect gate="1" pin="PA6" pad="8"/>
                                        <connect gate="1" pin="PA7" pad="9"/>
                                        <connect gate="1" pin="PB0" pad="10"/>
                                        <connect gate="1" pin="PB1" pad="11"/>
                                        <connect gate="1" pin="PB2" pad="12"/>
                                        <connect gate="1" pin="PB3" pad="13"/>
                                        <connect gate="1" pin="PB4" pad="14"/>
                                        <connect gate="1" pin="PB5" pad="15"/>
                                        <connect gate="1" pin="PB6" pad="16"/>
                                        <connect gate="1" pin="PB7" pad="17"/>
                                        <connect gate="1" pin="R/!W" pad="21"/>
                                        <connect gate="1" pin="RS0" pad="36"/>
                                        <connect gate="1" pin="RS1" pad="35"/>
                                    </connects>
                                    <technologies>
                                        <technology name=""/>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                        <deviceset name="DIP16SOCKET" prefix="J" library_version="18">
                            <gates>
                                <gate name="1" symbol="DIP16SOCKET" x="0" y="0"/>
                            </gates>
                            <devices>
                                <device name="" package="DIL16">
                                    <connects>
                                        <connect gate="1" pin="1" pad="1"/>
                                        <connect gate="1" pin="10" pad="10"/>
                                        <connect gate="1" pin="11" pad="11"/>
                                        <connect gate="1" pin="12" pad="12"/>
                                        <connect gate="1" pin="13" pad="13"/>
                                        <connect gate="1" pin="14" pad="14"/>
                                        <connect gate="1" pin="15" pad="15"/>
                                        <connect gate="1" pin="16" pad="16"/>
                                        <connect gate="1" pin="2" pad="2"/>
                                        <connect gate="1" pin="3" pad="3"/>
                                        <connect gate="1" pin="4" pad="4"/>
                                        <connect gate="1" pin="5" pad="5"/>
                                        <connect gate="1" pin="6" pad="6"/>
                                        <connect gate="1" pin="7" pad="7"/>
                                        <connect gate="1" pin="8" pad="8"/>
                                        <connect gate="1" pin="9" pad="9"/>
                                    </connects>
                                    <technologies>
                                        <technology name=""/>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                        <deviceset name="SN15836" prefix="U" library_version="7">
                            <description>Hex &lt;b&gt;INVERTER&lt;/b&gt;</description>
                            <gates>
                                <gate name="A" symbol="15836" x="-7.62" y="12.7" swaplevel="1"/>
                                <gate name="B" symbol="15836" x="-7.62" y="0" swaplevel="1"/>
                                <gate name="C" symbol="15836" x="-7.62" y="-12.7" swaplevel="1"/>
                                <gate name="D" symbol="15836" x="20.32" y="12.7" swaplevel="1"/>
                                <gate name="E" symbol="15836" x="20.32" y="0" swaplevel="1"/>
                                <gate name="F" symbol="15836" x="20.32" y="-12.7" swaplevel="1"/>
                                <gate name="G$1" symbol="PWRN" x="-33.02" y="2.54"/>
                            </gates>
                            <devices>
                                <device name="N" package="DIL14">
                                    <connects>
                                        <connect gate="A" pin="I" pad="1"/>
                                        <connect gate="A" pin="O" pad="2"/>
                                        <connect gate="B" pin="I" pad="3"/>
                                        <connect gate="B" pin="O" pad="4"/>
                                        <connect gate="C" pin="I" pad="5"/>
                                        <connect gate="C" pin="O" pad="6"/>
                                        <connect gate="D" pin="I" pad="9"/>
                                        <connect gate="D" pin="O" pad="8"/>
                                        <connect gate="E" pin="I" pad="11"/>
                                        <connect gate="E" pin="O" pad="10"/>
                                        <connect gate="F" pin="I" pad="13"/>
                                        <connect gate="F" pin="O" pad="12"/>
                                        <connect gate="G$1" pin="GND" pad="7"/>
                                        <connect gate="G$1" pin="VCC" pad="14"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16407/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="">
                                            <attribute name="CATEGORY" value="IC_Logic" constant="no"/>
                                            <attribute name="DESCRIPTION" value="" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Inverter" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                        <technology name="ALS">
                                            <attribute name="CATEGORY" value="IC_Logic" constant="no"/>
                                            <attribute name="DESCRIPTION" value="" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Inverter" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                        <technology name="AS">
                                            <attribute name="CATEGORY" value="IC_Logic" constant="no"/>
                                            <attribute name="DESCRIPTION" value="" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Inverter" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="CATEGORY" value="IC_Logic" constant="no"/>
                                            <attribute name="DESCRIPTION" value="" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Inverter" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                        <technology name="S">
                                            <attribute name="CATEGORY" value="IC_Logic" constant="no"/>
                                            <attribute name="DESCRIPTION" value="" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Inverter" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                        <deviceset name="TESTPOINT" prefix="TP" library_version="13">
                            <gates>
                                <gate name="1" symbol="TESTPOINT" x="0" y="0"/>
                            </gates>
                            <devices>
                                <device name="" package="TESTPOINT">
                                    <connects>
                                        <connect gate="1" pin="TP" pad="P$1"/>
                                    </connects>
                                    <technologies>
                                        <technology name=""/>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                    </devicesets>
                </library>
                <library name="Tutorial - Fusion 360">
                    <description>Library of several components used in the Getting Started With Fusion Electronics
                        tutorial.
                    </description>
                    <packages>
                    </packages>
                    <symbols>
                        <symbol name="GND" urn="urn:adsk.eagle:symbol:16997206/1">
                            <description>Ground (GND) Arrow</description>
                            <wire x1="-1.27" y1="0" x2="1.27" y2="0" width="0.254" layer="94"/>
                            <wire x1="1.27" y1="0" x2="0" y2="-1.27" width="0.254" layer="94"/>
                            <wire x1="0" y1="-1.27" x2="-1.27" y2="0" width="0.254" layer="94"/>
                            <text x="0.127" y="-3.175" size="1.778" layer="96" align="bottom-center">&gt;VALUE</text>
                            <pin name="GND" x="0" y="2.54" visible="off" length="short" direction="sup" rot="R270"/>
                        </symbol>
                        <symbol name="+V" urn="urn:adsk.eagle:symbol:16997213/1">
                            <wire x1="-1.905" y1="0" x2="1.905" y2="0" width="0.254" layer="94"/>
                            <text x="0.127" y="0.762" size="1.778" layer="96" align="bottom-center">&gt;VALUE</text>
                            <pin name="+V" x="0" y="-2.54" visible="off" length="short" direction="sup" rot="R90"/>
                        </symbol>
                    </symbols>
                    <devicesets>
                        <deviceset name="GND" urn="urn:adsk.eagle:component:16997230/1" prefix="SUPPLY">
                            <description>&lt;b&gt;SUPPLY SYMBOL&lt;/b&gt; - Ground (GND) Arrow</description>
                            <gates>
                                <gate name="G$1" symbol="GND" x="0" y="0"/>
                            </gates>
                            <devices>
                                <device name="">
                                    <technologies>
                                        <technology name="">
                                            <attribute name="CATEGORY" value="Supply" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                        <deviceset name="+V" urn="urn:adsk.eagle:component:16997231/1" prefix="SUPPLY">
                            <description>&lt;b&gt;SUPPLY SYMBOL&lt;/b&gt; Positive Voltage (+V) Bar</description>
                            <gates>
                                <gate name="G$1" symbol="+V" x="0" y="0"/>
                            </gates>
                            <devices>
                                <device name="">
                                    <technologies>
                                        <technology name="">
                                            <attribute name="CATEGORY" value="Supply" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                    </devicesets>
                </library>
                <library name="74xx-us" urn="urn:adsk.eagle:library:88">
                    <description>&lt;b&gt;TTL Devices, 74xx Series with US Symbols&lt;/b&gt;&lt;p&gt;
                        Based on the following sources:
                        &lt;ul&gt;
                        &lt;li&gt;Texas Instruments &lt;i&gt;TTL Data Book&lt;/i&gt;&amp;nbsp;&amp;nbsp;&amp;nbsp;Volume
                        1, 1996.
                        &lt;li&gt;TTL Data Book, Volume 2 , 1993
                        &lt;li&gt;National Seminconductor Databook 1990, ALS/LS Logic
                        &lt;li&gt;ttl 74er digital data dictionary, ECA Electronic + Acustic GmbH, ISBN 3-88109-032-0
                        &lt;li&gt;http://icmaster.com/ViewCompare.asp
                        &lt;/ul&gt;
                        &lt;author&gt;Created by librarian@cadsoft.de&lt;/author&gt;
                    </description>
                    <packages>
                        <package name="DIL16" urn="urn:adsk.eagle:footprint:917/1" library_version="3">
                            <description>&lt;b&gt;Dual In Line Package&lt;/b&gt;</description>
                            <wire x1="10.16" y1="2.921" x2="-10.16" y2="2.921" width="0.1524" layer="21"/>
                            <wire x1="-10.16" y1="-2.921" x2="10.16" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="10.16" y1="2.921" x2="10.16" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="-10.16" y1="2.921" x2="-10.16" y2="1.016" width="0.1524" layer="21"/>
                            <wire x1="-10.16" y1="-2.921" x2="-10.16" y2="-1.016" width="0.1524" layer="21"/>
                            <wire x1="-10.16" y1="1.016" x2="-10.16" y2="-1.016" width="0.1524" layer="21"
                                  curve="-180"/>
                            <pad name="1" x="-8.89" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="2" x="-6.35" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="7" x="6.35" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="8" x="8.89" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="3" x="-3.81" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="4" x="-1.27" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="6" x="3.81" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="5" x="1.27" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="9" x="8.89" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="10" x="6.35" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="11" x="3.81" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="12" x="1.27" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="13" x="-1.27" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="14" x="-3.81" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="15" x="-6.35" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="16" x="-8.89" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <text x="-10.541" y="-2.921" size="1.27" layer="25" ratio="10" rot="R90">&gt;NAME</text>
                            <text x="-7.493" y="-0.635" size="1.27" layer="27" ratio="10">&gt;VALUE</text>
                        </package>
                        <package name="SO16" urn="urn:adsk.eagle:footprint:2530/1" library_version="3">
                            <description>&lt;b&gt;Small Outline package&lt;/b&gt; 150 mil</description>
                            <wire x1="4.699" y1="1.9558" x2="-4.699" y2="1.9558" width="0.1524" layer="21"/>
                            <wire x1="4.699" y1="-1.9558" x2="5.08" y2="-1.5748" width="0.1524" layer="21" curve="90"/>
                            <wire x1="-5.08" y1="1.5748" x2="-4.699" y2="1.9558" width="0.1524" layer="21" curve="-90"/>
                            <wire x1="4.699" y1="1.9558" x2="5.08" y2="1.5748" width="0.1524" layer="21" curve="-90"/>
                            <wire x1="-5.08" y1="-1.5748" x2="-4.699" y2="-1.9558" width="0.1524" layer="21"
                                  curve="90"/>
                            <wire x1="-4.699" y1="-1.9558" x2="4.699" y2="-1.9558" width="0.1524" layer="21"/>
                            <wire x1="5.08" y1="-1.5748" x2="5.08" y2="1.5748" width="0.1524" layer="21"/>
                            <wire x1="-5.08" y1="1.5748" x2="-5.08" y2="0.508" width="0.1524" layer="21"/>
                            <wire x1="-5.08" y1="0.508" x2="-5.08" y2="-0.508" width="0.1524" layer="21"/>
                            <wire x1="-5.08" y1="-0.508" x2="-5.08" y2="-1.5748" width="0.1524" layer="21"/>
                            <wire x1="-5.08" y1="0.508" x2="-5.08" y2="-0.508" width="0.1524" layer="21" curve="-180"/>
                            <wire x1="-5.08" y1="-1.6002" x2="5.08" y2="-1.6002" width="0.0508" layer="21"/>
                            <smd name="1" x="-4.445" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="16" x="-4.445" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="2" x="-3.175" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="3" x="-1.905" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="15" x="-3.175" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="14" x="-1.905" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="4" x="-0.635" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="13" x="-0.635" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="5" x="0.635" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="12" x="0.635" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="6" x="1.905" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="7" x="3.175" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="11" x="1.905" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="10" x="3.175" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="8" x="4.445" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="9" x="4.445" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <text x="-4.064" y="-0.635" size="1.27" layer="27" ratio="10">&gt;VALUE</text>
                            <text x="-5.461" y="-1.778" size="1.27" layer="25" ratio="10" rot="R90">&gt;NAME</text>
                            <rectangle x1="-0.889" y1="1.9558" x2="-0.381" y2="3.0988" layer="51"/>
                            <rectangle x1="-4.699" y1="-3.0988" x2="-4.191" y2="-1.9558" layer="51"/>
                            <rectangle x1="-3.429" y1="-3.0988" x2="-2.921" y2="-1.9558" layer="51"/>
                            <rectangle x1="-2.159" y1="-3.0734" x2="-1.651" y2="-1.9304" layer="51"/>
                            <rectangle x1="-0.889" y1="-3.0988" x2="-0.381" y2="-1.9558" layer="51"/>
                            <rectangle x1="-2.159" y1="1.9558" x2="-1.651" y2="3.0988" layer="51"/>
                            <rectangle x1="-3.429" y1="1.9558" x2="-2.921" y2="3.0988" layer="51"/>
                            <rectangle x1="-4.699" y1="1.9558" x2="-4.191" y2="3.0988" layer="51"/>
                            <rectangle x1="0.381" y1="-3.0988" x2="0.889" y2="-1.9558" layer="51"/>
                            <rectangle x1="1.651" y1="-3.0988" x2="2.159" y2="-1.9558" layer="51"/>
                            <rectangle x1="2.921" y1="-3.0988" x2="3.429" y2="-1.9558" layer="51"/>
                            <rectangle x1="4.191" y1="-3.0988" x2="4.699" y2="-1.9558" layer="51"/>
                            <rectangle x1="0.381" y1="1.9558" x2="0.889" y2="3.0988" layer="51"/>
                            <rectangle x1="1.651" y1="1.9558" x2="2.159" y2="3.0988" layer="51"/>
                            <rectangle x1="2.921" y1="1.9558" x2="3.429" y2="3.0988" layer="51"/>
                            <rectangle x1="4.191" y1="1.9558" x2="4.699" y2="3.0988" layer="51"/>
                        </package>
                        <package name="LCC20" urn="urn:adsk.eagle:footprint:2525/1" library_version="3">
                            <description>&lt;b&gt;Leadless Chip Carrier&lt;/b&gt;&lt;p&gt; Ceramic Package</description>
                            <wire x1="-0.4001" y1="4.4" x2="-0.87" y2="4.4" width="0.2032" layer="51"/>
                            <wire x1="-3.3" y1="4.4" x2="-4.4" y2="3.3" width="0.2032" layer="51"/>
                            <wire x1="-0.4001" y1="4.3985" x2="0.4001" y2="4.3985" width="0.2032" layer="51"
                                  curve="180"/>
                            <wire x1="-1.6701" y1="4.3985" x2="-0.8699" y2="4.3985" width="0.2032" layer="51"
                                  curve="180"/>
                            <wire x1="-4.3985" y1="2.14" x2="-4.3985" y2="2.94" width="0.2032" layer="51" curve="180"/>
                            <wire x1="-2.9401" y1="4.4" x2="-3.3" y2="4.4" width="0.2032" layer="51"/>
                            <wire x1="0.87" y1="4.4" x2="0.4001" y2="4.4" width="0.2032" layer="51"/>
                            <wire x1="0.87" y1="4.3985" x2="1.67" y2="4.3985" width="0.2032" layer="51" curve="180"/>
                            <wire x1="-4.4" y1="3.3" x2="-4.4" y2="2.9401" width="0.2032" layer="51"/>
                            <wire x1="-4.4" y1="2.14" x2="-4.4" y2="1.6701" width="0.2032" layer="51"/>
                            <wire x1="-4.3985" y1="0.87" x2="-4.3985" y2="1.67" width="0.2032" layer="51" curve="180"/>
                            <wire x1="-4.3985" y1="-0.4001" x2="-4.3985" y2="0.4001" width="0.2032" layer="51"
                                  curve="180"/>
                            <wire x1="-4.3985" y1="-1.6701" x2="-4.3985" y2="-0.8699" width="0.2032" layer="51"
                                  curve="180"/>
                            <wire x1="-4.4" y1="0.87" x2="-4.4" y2="0.4001" width="0.2032" layer="51"/>
                            <wire x1="-4.4" y1="-0.4001" x2="-4.4" y2="-0.87" width="0.2032" layer="51"/>
                            <wire x1="-4.4" y1="-2.9401" x2="-4.4" y2="-4.4" width="0.2032" layer="51"/>
                            <wire x1="-4.4" y1="-4.4" x2="-4.4" y2="-4.4099" width="0.2032" layer="51"/>
                            <wire x1="2.14" y1="4.3985" x2="2.94" y2="4.3985" width="0.2032" layer="51" curve="180"/>
                            <wire x1="2.14" y1="4.4" x2="1.6701" y2="4.4" width="0.2032" layer="51"/>
                            <wire x1="4.4" y1="4.4" x2="2.9401" y2="4.4" width="0.2032" layer="51"/>
                            <wire x1="0.4001" y1="-4.4" x2="0.87" y2="-4.4" width="0.2032" layer="51"/>
                            <wire x1="-0.4001" y1="-4.3985" x2="0.4001" y2="-4.3985" width="0.2032" layer="51"
                                  curve="-180"/>
                            <wire x1="0.87" y1="-4.3985" x2="1.67" y2="-4.3985" width="0.2032" layer="51" curve="-180"/>
                            <wire x1="2.9401" y1="-4.4" x2="4.4" y2="-4.4" width="0.2032" layer="51"/>
                            <wire x1="-0.87" y1="-4.4" x2="-0.4001" y2="-4.4" width="0.2032" layer="51"/>
                            <wire x1="-1.6701" y1="-4.3985" x2="-0.8699" y2="-4.3985" width="0.2032" layer="51"
                                  curve="-180"/>
                            <wire x1="-2.9401" y1="-4.3985" x2="-2.1399" y2="-4.3985" width="0.2032" layer="51"
                                  curve="-180"/>
                            <wire x1="-2.14" y1="-4.4" x2="-1.6701" y2="-4.4" width="0.2032" layer="51"/>
                            <wire x1="-4.4" y1="-4.4" x2="-2.9401" y2="-4.4" width="0.2032" layer="51"/>
                            <wire x1="4.4" y1="0.4001" x2="4.4" y2="0.87" width="0.2032" layer="51"/>
                            <wire x1="4.3985" y1="0.4001" x2="4.3985" y2="-0.4001" width="0.2032" layer="51"
                                  curve="180"/>
                            <wire x1="4.3985" y1="1.6701" x2="4.3985" y2="0.8699" width="0.2032" layer="51"
                                  curve="180"/>
                            <wire x1="4.4" y1="2.9401" x2="4.4" y2="4.4" width="0.2032" layer="51"/>
                            <wire x1="4.4" y1="-0.87" x2="4.4" y2="-0.4001" width="0.2032" layer="51"/>
                            <wire x1="4.3985" y1="-0.87" x2="4.3985" y2="-1.67" width="0.2032" layer="51" curve="180"/>
                            <wire x1="4.3985" y1="-2.14" x2="4.3985" y2="-2.94" width="0.2032" layer="51" curve="180"/>
                            <wire x1="4.4" y1="-2.14" x2="4.4" y2="-1.6701" width="0.2032" layer="51"/>
                            <wire x1="4.4" y1="-4.4" x2="4.4" y2="-2.9401" width="0.2032" layer="51"/>
                            <wire x1="-2.9401" y1="4.3985" x2="-2.1399" y2="4.3985" width="0.2032" layer="51"
                                  curve="180"/>
                            <wire x1="-1.6701" y1="4.4" x2="-2.14" y2="4.4" width="0.2032" layer="51"/>
                            <wire x1="-4.3985" y1="-2.9401" x2="-4.3985" y2="-2.1399" width="0.2032" layer="51"
                                  curve="180"/>
                            <wire x1="-4.4" y1="-1.6701" x2="-4.4" y2="-2.14" width="0.2032" layer="51"/>
                            <wire x1="1.6701" y1="-4.4" x2="2.14" y2="-4.4" width="0.2032" layer="51"/>
                            <wire x1="2.14" y1="-4.3985" x2="2.94" y2="-4.3985" width="0.2032" layer="51" curve="-180"/>
                            <wire x1="4.3985" y1="2.9401" x2="4.3985" y2="2.1399" width="0.2032" layer="51"
                                  curve="180"/>
                            <wire x1="4.4" y1="1.6701" x2="4.4" y2="2.14" width="0.2032" layer="51"/>
                            <smd name="2" x="-1.27" y="4.5001" dx="0.8" dy="2" layer="1"/>
                            <smd name="1" x="0" y="3.8001" dx="0.8" dy="3.4" layer="1"/>
                            <smd name="3" x="-2.54" y="4.5001" dx="0.8" dy="2" layer="1"/>
                            <smd name="4" x="-4.5001" y="2.54" dx="2" dy="0.8" layer="1"/>
                            <smd name="5" x="-4.5001" y="1.27" dx="2" dy="0.8" layer="1"/>
                            <smd name="6" x="-4.5001" y="0" dx="2" dy="0.8" layer="1"/>
                            <smd name="7" x="-4.5001" y="-1.27" dx="2" dy="0.8" layer="1"/>
                            <smd name="8" x="-4.5001" y="-2.54" dx="2" dy="0.8" layer="1"/>
                            <smd name="9" x="-2.54" y="-4.5001" dx="0.8" dy="2" layer="1"/>
                            <smd name="10" x="-1.27" y="-4.5001" dx="0.8" dy="2" layer="1"/>
                            <smd name="11" x="0" y="-4.5001" dx="0.8" dy="2" layer="1"/>
                            <smd name="12" x="1.27" y="-4.5001" dx="0.8" dy="2" layer="1"/>
                            <smd name="13" x="2.54" y="-4.5001" dx="0.8" dy="2" layer="1"/>
                            <smd name="14" x="4.5001" y="-2.54" dx="2" dy="0.8" layer="1"/>
                            <smd name="15" x="4.5001" y="-1.27" dx="2" dy="0.8" layer="1"/>
                            <smd name="16" x="4.5001" y="0" dx="2" dy="0.8" layer="1"/>
                            <smd name="17" x="4.5001" y="1.27" dx="2" dy="0.8" layer="1"/>
                            <smd name="18" x="4.5001" y="2.54" dx="2" dy="0.8" layer="1"/>
                            <smd name="19" x="2.54" y="4.5001" dx="0.8" dy="2" layer="1"/>
                            <smd name="20" x="1.27" y="4.5001" dx="0.8" dy="2" layer="1"/>
                            <text x="-3.4971" y="5.811" size="1.778" layer="25">&gt;NAME</text>
                            <text x="-3.9751" y="-7.6871" size="1.778" layer="27">&gt;VALUE</text>
                        </package>
                        <package name="DIL14" urn="urn:adsk.eagle:footprint:16136/1" library_version="3">
                            <description>&lt;b&gt;Dual In Line Package&lt;/b&gt;</description>
                            <wire x1="8.89" y1="2.921" x2="-8.89" y2="2.921" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="-2.921" x2="8.89" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="8.89" y1="2.921" x2="8.89" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="2.921" x2="-8.89" y2="1.016" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="-2.921" x2="-8.89" y2="-1.016" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="1.016" x2="-8.89" y2="-1.016" width="0.1524" layer="21" curve="-180"/>
                            <pad name="1" x="-7.62" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="2" x="-5.08" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="7" x="7.62" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="8" x="7.62" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="3" x="-2.54" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="4" x="0" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="6" x="5.08" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="5" x="2.54" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="9" x="5.08" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="10" x="2.54" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="11" x="0" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="12" x="-2.54" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="13" x="-5.08" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="14" x="-7.62" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <text x="-9.271" y="-3.048" size="1.27" layer="25" ratio="10" rot="R90">&gt;NAME</text>
                            <text x="-6.731" y="-0.635" size="1.27" layer="27" ratio="10">&gt;VALUE</text>
                        </package>
                        <package name="SO14" urn="urn:adsk.eagle:footprint:2524/1" library_version="3">
                            <description>&lt;b&gt;Small Outline package&lt;/b&gt; 150 mil</description>
                            <wire x1="4.064" y1="1.9558" x2="-4.064" y2="1.9558" width="0.1524" layer="21"/>
                            <wire x1="4.064" y1="-1.9558" x2="4.445" y2="-1.5748" width="0.1524" layer="21" curve="90"/>
                            <wire x1="-4.445" y1="1.5748" x2="-4.064" y2="1.9558" width="0.1524" layer="21"
                                  curve="-90"/>
                            <wire x1="4.064" y1="1.9558" x2="4.445" y2="1.5748" width="0.1524" layer="21" curve="-90"/>
                            <wire x1="-4.445" y1="-1.5748" x2="-4.064" y2="-1.9558" width="0.1524" layer="21"
                                  curve="90"/>
                            <wire x1="-4.064" y1="-1.9558" x2="4.064" y2="-1.9558" width="0.1524" layer="21"/>
                            <wire x1="4.445" y1="-1.5748" x2="4.445" y2="1.5748" width="0.1524" layer="21"/>
                            <wire x1="-4.445" y1="1.5748" x2="-4.445" y2="0.508" width="0.1524" layer="21"/>
                            <wire x1="-4.445" y1="0.508" x2="-4.445" y2="-0.508" width="0.1524" layer="21"/>
                            <wire x1="-4.445" y1="-0.508" x2="-4.445" y2="-1.5748" width="0.1524" layer="21"/>
                            <wire x1="-4.445" y1="0.508" x2="-4.445" y2="-0.508" width="0.1524" layer="21"
                                  curve="-180"/>
                            <wire x1="-4.445" y1="-1.6002" x2="4.445" y2="-1.6002" width="0.0508" layer="21"/>
                            <smd name="1" x="-3.81" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="14" x="-3.81" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="2" x="-2.54" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="3" x="-1.27" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="13" x="-2.54" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="12" x="-1.27" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="4" x="0" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="11" x="0" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="5" x="1.27" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="6" x="2.54" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="10" x="1.27" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="9" x="2.54" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="7" x="3.81" y="-3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <smd name="8" x="3.81" y="3.0734" dx="0.6604" dy="2.032" layer="1"/>
                            <text x="-3.556" y="-0.508" size="1.27" layer="27" ratio="10">&gt;VALUE</text>
                            <text x="-4.699" y="-1.778" size="1.27" layer="25" ratio="10" rot="R90">&gt;NAME</text>
                            <rectangle x1="-0.254" y1="1.9558" x2="0.254" y2="3.0988" layer="51"/>
                            <rectangle x1="-4.064" y1="-3.0988" x2="-3.556" y2="-1.9558" layer="51"/>
                            <rectangle x1="-2.794" y1="-3.0988" x2="-2.286" y2="-1.9558" layer="51"/>
                            <rectangle x1="-1.524" y1="-3.0734" x2="-1.016" y2="-1.9304" layer="51"/>
                            <rectangle x1="-0.254" y1="-3.0988" x2="0.254" y2="-1.9558" layer="51"/>
                            <rectangle x1="-1.524" y1="1.9558" x2="-1.016" y2="3.0988" layer="51"/>
                            <rectangle x1="-2.794" y1="1.9558" x2="-2.286" y2="3.0988" layer="51"/>
                            <rectangle x1="-4.064" y1="1.9558" x2="-3.556" y2="3.0988" layer="51"/>
                            <rectangle x1="1.016" y1="1.9558" x2="1.524" y2="3.0988" layer="51"/>
                            <rectangle x1="2.286" y1="1.9558" x2="2.794" y2="3.0988" layer="51"/>
                            <rectangle x1="3.556" y1="1.9558" x2="4.064" y2="3.0988" layer="51"/>
                            <rectangle x1="1.016" y1="-3.0988" x2="1.524" y2="-1.9558" layer="51"/>
                            <rectangle x1="2.286" y1="-3.0988" x2="2.794" y2="-1.9558" layer="51"/>
                            <rectangle x1="3.556" y1="-3.0988" x2="4.064" y2="-1.9558" layer="51"/>
                        </package>
                    </packages>
                    <packages3d>
                        <package3d name="DIL16" urn="urn:adsk.eagle:package:922/2" type="model" library_version="3">
                            <description>Dual In Line Package</description>
                            <packageinstances>
                                <packageinstance name="DIL16"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="SO16" urn="urn:adsk.eagle:package:2918/1" type="box" library_version="3">
                            <description>Small Outline package 150 mil</description>
                            <packageinstances>
                                <packageinstance name="SO16"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="LCC20" urn="urn:adsk.eagle:package:2919/1" type="box" library_version="3">
                            <description>Leadless Chip Carrier Ceramic Package</description>
                            <packageinstances>
                                <packageinstance name="LCC20"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="DIL14" urn="urn:adsk.eagle:package:16407/2" type="model" library_version="3">
                            <description>Dual In Line Package</description>
                            <packageinstances>
                                <packageinstance name="DIL14"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="SO14" urn="urn:adsk.eagle:package:2917/1" type="box" library_version="3">
                            <description>Small Outline package 150 mil</description>
                            <packageinstances>
                                <packageinstance name="SO14"/>
                            </packageinstances>
                        </package3d>
                    </packages3d>
                    <symbols>
                        <symbol name="74123" urn="urn:adsk.eagle:symbol:2574/1" library_version="3">
                            <wire x1="-7.62" y1="-10.16" x2="7.62" y2="-10.16" width="0.4064" layer="94"/>
                            <wire x1="7.62" y1="-10.16" x2="7.62" y2="7.62" width="0.4064" layer="94"/>
                            <wire x1="7.62" y1="7.62" x2="-7.62" y2="7.62" width="0.4064" layer="94"/>
                            <wire x1="-7.62" y1="7.62" x2="-7.62" y2="-10.16" width="0.4064" layer="94"/>
                            <text x="-7.62" y="8.255" size="1.778" layer="95">&gt;NAME</text>
                            <text x="-7.62" y="-12.7" size="1.778" layer="96">&gt;VALUE</text>
                            <pin name="A" x="-12.7" y="5.08" length="middle" direction="in" function="dot"/>
                            <pin name="B" x="-12.7" y="2.54" length="middle" direction="in"/>
                            <pin name="CLR" x="-12.7" y="-7.62" length="middle" direction="in" function="dot"/>
                            <pin name="!Q" x="12.7" y="-7.62" length="middle" direction="out" rot="R180"/>
                            <pin name="Q" x="12.7" y="-2.54" length="middle" direction="out" rot="R180"/>
                            <pin name="C" x="-12.7" y="-2.54" length="middle" direction="in"/>
                            <pin name="R/C" x="-12.7" y="-5.08" length="middle" direction="in"/>
                        </symbol>
                        <symbol name="PWRN" urn="urn:adsk.eagle:symbol:2522/1" library_version="3">
                            <text x="-0.635" y="-0.635" size="1.778" layer="95">&gt;NAME</text>
                            <text x="1.905" y="-7.62" size="1.27" layer="95" rot="R90">GND</text>
                            <text x="1.905" y="5.08" size="1.27" layer="95" rot="R90">VCC</text>
                            <pin name="GND" x="0" y="-10.16" visible="pad" direction="pwr" rot="R90"/>
                            <pin name="VCC" x="0" y="10.16" visible="pad" direction="pwr" rot="R270"/>
                        </symbol>
                        <symbol name="7408" urn="urn:adsk.eagle:symbol:2705/1" library_version="3">
                            <wire x1="-7.62" y1="5.08" x2="-7.62" y2="-5.08" width="0.4064" layer="94"/>
                            <wire x1="-7.62" y1="-5.08" x2="2.54" y2="-5.08" width="0.4064" layer="94"/>
                            <wire x1="2.54" y1="5.08" x2="2.54" y2="-5.08" width="0.4064" layer="94" curve="-180"/>
                            <wire x1="2.54" y1="5.08" x2="-7.62" y2="5.08" width="0.4064" layer="94"/>
                            <text x="-7.62" y="5.715" size="1.778" layer="95">&gt;NAME</text>
                            <text x="-7.62" y="-7.62" size="1.778" layer="96">&gt;VALUE</text>
                            <pin name="I0" x="-12.7" y="2.54" visible="pad" length="middle" direction="in"
                                 swaplevel="1"/>
                            <pin name="I1" x="-12.7" y="-2.54" visible="pad" length="middle" direction="in"
                                 swaplevel="1"/>
                            <pin name="O" x="12.7" y="0" visible="pad" length="middle" direction="out" rot="R180"/>
                        </symbol>
                        <symbol name="74174" urn="urn:adsk.eagle:symbol:2605/1" library_version="3">
                            <wire x1="-7.62" y1="-12.7" x2="7.62" y2="-12.7" width="0.4064" layer="94"/>
                            <wire x1="7.62" y1="-12.7" x2="7.62" y2="12.7" width="0.4064" layer="94"/>
                            <wire x1="7.62" y1="12.7" x2="-7.62" y2="12.7" width="0.4064" layer="94"/>
                            <wire x1="-7.62" y1="12.7" x2="-7.62" y2="-12.7" width="0.4064" layer="94"/>
                            <text x="-7.62" y="13.335" size="1.778" layer="95">&gt;NAME</text>
                            <text x="-7.62" y="-15.24" size="1.778" layer="96">&gt;VALUE</text>
                            <pin name="CLR" x="-12.7" y="-10.16" length="middle" direction="in" function="dot"/>
                            <pin name="Q1" x="12.7" y="10.16" length="middle" direction="out" rot="R180"/>
                            <pin name="D1" x="-12.7" y="10.16" length="middle" direction="in"/>
                            <pin name="D2" x="-12.7" y="7.62" length="middle" direction="in"/>
                            <pin name="Q2" x="12.7" y="7.62" length="middle" direction="out" rot="R180"/>
                            <pin name="D3" x="-12.7" y="5.08" length="middle" direction="in"/>
                            <pin name="Q3" x="12.7" y="5.08" length="middle" direction="out" rot="R180"/>
                            <pin name="CLK" x="-12.7" y="-7.62" length="middle" direction="in" function="clk"/>
                            <pin name="Q4" x="12.7" y="2.54" length="middle" direction="out" rot="R180"/>
                            <pin name="D4" x="-12.7" y="2.54" length="middle" direction="in"/>
                            <pin name="Q5" x="12.7" y="0" length="middle" direction="out" rot="R180"/>
                            <pin name="D5" x="-12.7" y="0" length="middle" direction="in"/>
                            <pin name="D6" x="-12.7" y="-2.54" length="middle" direction="in"/>
                            <pin name="Q6" x="12.7" y="-2.54" length="middle" direction="out" rot="R180"/>
                        </symbol>
                        <symbol name="7427" urn="urn:adsk.eagle:symbol:2715/1" library_version="3">
                            <wire x1="-1.27" y1="5.08" x2="-7.62" y2="5.08" width="0.4064" layer="94"/>
                            <wire x1="-1.27" y1="-5.08" x2="-7.62" y2="-5.08" width="0.4064" layer="94"/>
                            <wire x1="-7.62" y1="2.54" x2="-6.35" y2="2.54" width="0.1524" layer="94"/>
                            <wire x1="-7.62" y1="-2.54" x2="-6.35" y2="-2.54" width="0.1524" layer="94"/>
                            <wire x1="-1.2446" y1="-5.0678" x2="7.5439" y2="0.0507" width="0.4064" layer="94"
                                  curve="60.147106" cap="flat"/>
                            <wire x1="-1.2446" y1="5.0678" x2="7.5442" y2="-0.0505" width="0.4064" layer="94"
                                  curve="-60.148802" cap="flat"/>
                            <wire x1="-7.62" y1="5.08" x2="-7.62" y2="-5.08" width="0.4064" layer="94"
                                  curve="-77.319617"/>
                            <wire x1="-7.62" y1="0" x2="-5.842" y2="0" width="0.1524" layer="94"/>
                            <text x="-7.62" y="5.715" size="1.778" layer="95">&gt;NAME</text>
                            <text x="-7.62" y="-7.62" size="1.778" layer="96">&gt;VALUE</text>
                            <pin name="I0" x="-12.7" y="2.54" visible="pad" length="middle" direction="in"
                                 swaplevel="1"/>
                            <pin name="I1" x="-12.7" y="0" visible="pad" length="middle" direction="in" swaplevel="1"/>
                            <pin name="O" x="12.7" y="0" visible="pad" length="middle" direction="out" function="dot"
                                 rot="R180"/>
                            <pin name="I2" x="-12.7" y="-2.54" visible="pad" length="middle" direction="in"
                                 swaplevel="1"/>
                        </symbol>
                    </symbols>
                    <devicesets>
                        <deviceset name="74*123" urn="urn:adsk.eagle:component:3076/3" prefix="IC" library_version="3">
                            <description>Retriggerable monostable &lt;b&gt;MULTIVIBRATOR&lt;/b&gt;</description>
                            <gates>
                                <gate name="A" symbol="74123" x="25.4" y="0" swaplevel="1"/>
                                <gate name="B" symbol="74123" x="25.4" y="-25.4" swaplevel="1"/>
                                <gate name="P" symbol="PWRN" x="-5.08" y="0" addlevel="request"/>
                            </gates>
                            <devices>
                                <device name="N" package="DIL16">
                                    <connects>
                                        <connect gate="A" pin="!Q" pad="4"/>
                                        <connect gate="A" pin="A" pad="1"/>
                                        <connect gate="A" pin="B" pad="2"/>
                                        <connect gate="A" pin="C" pad="14"/>
                                        <connect gate="A" pin="CLR" pad="3"/>
                                        <connect gate="A" pin="Q" pad="13"/>
                                        <connect gate="A" pin="R/C" pad="15"/>
                                        <connect gate="B" pin="!Q" pad="12"/>
                                        <connect gate="B" pin="A" pad="9"/>
                                        <connect gate="B" pin="B" pad="10"/>
                                        <connect gate="B" pin="C" pad="6"/>
                                        <connect gate="B" pin="CLR" pad="11"/>
                                        <connect gate="B" pin="Q" pad="5"/>
                                        <connect gate="B" pin="R/C" pad="7"/>
                                        <connect gate="P" pin="GND" pad="8"/>
                                        <connect gate="P" pin="VCC" pad="16"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:922/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="D" package="SO16">
                                    <connects>
                                        <connect gate="A" pin="!Q" pad="4"/>
                                        <connect gate="A" pin="A" pad="1"/>
                                        <connect gate="A" pin="B" pad="2"/>
                                        <connect gate="A" pin="C" pad="14"/>
                                        <connect gate="A" pin="CLR" pad="3"/>
                                        <connect gate="A" pin="Q" pad="13"/>
                                        <connect gate="A" pin="R/C" pad="15"/>
                                        <connect gate="B" pin="!Q" pad="12"/>
                                        <connect gate="B" pin="A" pad="9"/>
                                        <connect gate="B" pin="B" pad="10"/>
                                        <connect gate="B" pin="C" pad="6"/>
                                        <connect gate="B" pin="CLR" pad="11"/>
                                        <connect gate="B" pin="Q" pad="5"/>
                                        <connect gate="B" pin="R/C" pad="7"/>
                                        <connect gate="P" pin="GND" pad="8"/>
                                        <connect gate="P" pin="VCC" pad="16"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:2918/1"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="FK" package="LCC20">
                                    <connects>
                                        <connect gate="A" pin="!Q" pad="5"/>
                                        <connect gate="A" pin="A" pad="2"/>
                                        <connect gate="A" pin="B" pad="3"/>
                                        <connect gate="A" pin="C" pad="18"/>
                                        <connect gate="A" pin="CLR" pad="4"/>
                                        <connect gate="A" pin="Q" pad="17"/>
                                        <connect gate="A" pin="R/C" pad="19"/>
                                        <connect gate="B" pin="!Q" pad="15"/>
                                        <connect gate="B" pin="A" pad="12"/>
                                        <connect gate="B" pin="B" pad="13"/>
                                        <connect gate="B" pin="C" pad="8"/>
                                        <connect gate="B" pin="CLR" pad="14"/>
                                        <connect gate="B" pin="Q" pad="7"/>
                                        <connect gate="B" pin="R/C" pad="9"/>
                                        <connect gate="P" pin="GND" pad="10"/>
                                        <connect gate="P" pin="VCC" pad="20"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:2919/1"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                        <deviceset name="74*08" urn="urn:adsk.eagle:component:2988/3" prefix="IC" library_version="3">
                            <description>Quad 2-input &lt;b&gt;AND&lt;/b&gt; gate</description>
                            <gates>
                                <gate name="A" symbol="7408" x="20.32" y="0" swaplevel="1"/>
                                <gate name="B" symbol="7408" x="20.32" y="-12.7" swaplevel="1"/>
                                <gate name="C" symbol="7408" x="50.8" y="0" swaplevel="1"/>
                                <gate name="D" symbol="7408" x="50.8" y="-12.7" swaplevel="1"/>
                                <gate name="P" symbol="PWRN" x="2.54" y="-7.62" addlevel="request"/>
                            </gates>
                            <devices>
                                <device name="N" package="DIL14">
                                    <connects>
                                        <connect gate="A" pin="I0" pad="1"/>
                                        <connect gate="A" pin="I1" pad="2"/>
                                        <connect gate="A" pin="O" pad="3"/>
                                        <connect gate="B" pin="I0" pad="4"/>
                                        <connect gate="B" pin="I1" pad="5"/>
                                        <connect gate="B" pin="O" pad="6"/>
                                        <connect gate="C" pin="I0" pad="9"/>
                                        <connect gate="C" pin="I1" pad="10"/>
                                        <connect gate="C" pin="O" pad="8"/>
                                        <connect gate="D" pin="I0" pad="12"/>
                                        <connect gate="D" pin="I1" pad="13"/>
                                        <connect gate="D" pin="O" pad="11"/>
                                        <connect gate="P" pin="GND" pad="7"/>
                                        <connect gate="P" pin="VCC" pad="14"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16407/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="ALS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="AS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="S">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="D" package="SO14">
                                    <connects>
                                        <connect gate="A" pin="I0" pad="1"/>
                                        <connect gate="A" pin="I1" pad="2"/>
                                        <connect gate="A" pin="O" pad="3"/>
                                        <connect gate="B" pin="I0" pad="4"/>
                                        <connect gate="B" pin="I1" pad="5"/>
                                        <connect gate="B" pin="O" pad="6"/>
                                        <connect gate="C" pin="I0" pad="9"/>
                                        <connect gate="C" pin="I1" pad="10"/>
                                        <connect gate="C" pin="O" pad="8"/>
                                        <connect gate="D" pin="I0" pad="12"/>
                                        <connect gate="D" pin="I1" pad="13"/>
                                        <connect gate="D" pin="O" pad="11"/>
                                        <connect gate="P" pin="GND" pad="7"/>
                                        <connect gate="P" pin="VCC" pad="14"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:2917/1"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="ALS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="AS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="S">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="FK" package="LCC20">
                                    <connects>
                                        <connect gate="A" pin="I0" pad="2"/>
                                        <connect gate="A" pin="I1" pad="3"/>
                                        <connect gate="A" pin="O" pad="4"/>
                                        <connect gate="B" pin="I0" pad="6"/>
                                        <connect gate="B" pin="I1" pad="8"/>
                                        <connect gate="B" pin="O" pad="9"/>
                                        <connect gate="C" pin="I0" pad="13"/>
                                        <connect gate="C" pin="I1" pad="14"/>
                                        <connect gate="C" pin="O" pad="12"/>
                                        <connect gate="D" pin="I0" pad="18"/>
                                        <connect gate="D" pin="I1" pad="19"/>
                                        <connect gate="D" pin="O" pad="16"/>
                                        <connect gate="P" pin="GND" pad="10"/>
                                        <connect gate="P" pin="VCC" pad="20"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:2919/1"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="ALS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="AS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="S">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                        <deviceset name="74*174" urn="urn:adsk.eagle:component:3099/3" prefix="IC" library_version="3">
                            <description>Hex D type &lt;b&gt;FLIP FLOP&lt;/b&gt;, clear</description>
                            <gates>
                                <gate name="A" symbol="74174" x="20.32" y="0"/>
                                <gate name="P" symbol="PWRN" x="-5.08" y="0" addlevel="request"/>
                            </gates>
                            <devices>
                                <device name="N" package="DIL16">
                                    <connects>
                                        <connect gate="A" pin="CLK" pad="9"/>
                                        <connect gate="A" pin="CLR" pad="1"/>
                                        <connect gate="A" pin="D1" pad="3"/>
                                        <connect gate="A" pin="D2" pad="4"/>
                                        <connect gate="A" pin="D3" pad="6"/>
                                        <connect gate="A" pin="D4" pad="11"/>
                                        <connect gate="A" pin="D5" pad="13"/>
                                        <connect gate="A" pin="D6" pad="14"/>
                                        <connect gate="A" pin="Q1" pad="2"/>
                                        <connect gate="A" pin="Q2" pad="5"/>
                                        <connect gate="A" pin="Q3" pad="7"/>
                                        <connect gate="A" pin="Q4" pad="10"/>
                                        <connect gate="A" pin="Q5" pad="12"/>
                                        <connect gate="A" pin="Q6" pad="15"/>
                                        <connect gate="P" pin="GND" pad="8"/>
                                        <connect gate="P" pin="VCC" pad="16"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:922/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="S">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="D" package="SO16">
                                    <connects>
                                        <connect gate="A" pin="CLK" pad="9"/>
                                        <connect gate="A" pin="CLR" pad="1"/>
                                        <connect gate="A" pin="D1" pad="3"/>
                                        <connect gate="A" pin="D2" pad="4"/>
                                        <connect gate="A" pin="D3" pad="6"/>
                                        <connect gate="A" pin="D4" pad="11"/>
                                        <connect gate="A" pin="D5" pad="13"/>
                                        <connect gate="A" pin="D6" pad="14"/>
                                        <connect gate="A" pin="Q1" pad="2"/>
                                        <connect gate="A" pin="Q2" pad="5"/>
                                        <connect gate="A" pin="Q3" pad="7"/>
                                        <connect gate="A" pin="Q4" pad="10"/>
                                        <connect gate="A" pin="Q5" pad="12"/>
                                        <connect gate="A" pin="Q6" pad="15"/>
                                        <connect gate="P" pin="GND" pad="8"/>
                                        <connect gate="P" pin="VCC" pad="16"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:2918/1"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="S">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="FK" package="LCC20">
                                    <connects>
                                        <connect gate="A" pin="CLK" pad="12"/>
                                        <connect gate="A" pin="CLR" pad="2"/>
                                        <connect gate="A" pin="D1" pad="4"/>
                                        <connect gate="A" pin="D2" pad="5"/>
                                        <connect gate="A" pin="D3" pad="8"/>
                                        <connect gate="A" pin="D4" pad="14"/>
                                        <connect gate="A" pin="D5" pad="17"/>
                                        <connect gate="A" pin="D6" pad="18"/>
                                        <connect gate="A" pin="Q1" pad="3"/>
                                        <connect gate="A" pin="Q2" pad="7"/>
                                        <connect gate="A" pin="Q3" pad="9"/>
                                        <connect gate="A" pin="Q4" pad="13"/>
                                        <connect gate="A" pin="Q5" pad="15"/>
                                        <connect gate="A" pin="Q6" pad="19"/>
                                        <connect gate="P" pin="GND" pad="10"/>
                                        <connect gate="P" pin="VCC" pad="20"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:2919/1"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="S">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                        <deviceset name="74*27" urn="urn:adsk.eagle:component:2998/3" prefix="IC" library_version="3">
                            <description>Triple 3-input &lt;b&gt;NOR&lt;/b&gt; gate</description>
                            <gates>
                                <gate name="A" symbol="7427" x="20.32" y="0" swaplevel="1"/>
                                <gate name="B" symbol="7427" x="20.32" y="-12.7" swaplevel="1"/>
                                <gate name="C" symbol="7427" x="50.8" y="0" swaplevel="1"/>
                                <gate name="P" symbol="PWRN" x="0" y="-7.62" addlevel="request"/>
                            </gates>
                            <devices>
                                <device name="N" package="DIL14">
                                    <connects>
                                        <connect gate="A" pin="I0" pad="1"/>
                                        <connect gate="A" pin="I1" pad="2"/>
                                        <connect gate="A" pin="I2" pad="13"/>
                                        <connect gate="A" pin="O" pad="12"/>
                                        <connect gate="B" pin="I0" pad="3"/>
                                        <connect gate="B" pin="I1" pad="4"/>
                                        <connect gate="B" pin="I2" pad="5"/>
                                        <connect gate="B" pin="O" pad="6"/>
                                        <connect gate="C" pin="I0" pad="9"/>
                                        <connect gate="C" pin="I1" pad="10"/>
                                        <connect gate="C" pin="I2" pad="11"/>
                                        <connect gate="C" pin="O" pad="8"/>
                                        <connect gate="P" pin="GND" pad="7"/>
                                        <connect gate="P" pin="VCC" pad="14"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16407/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="ALS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="AS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="D" package="SO14">
                                    <connects>
                                        <connect gate="A" pin="I0" pad="1"/>
                                        <connect gate="A" pin="I1" pad="2"/>
                                        <connect gate="A" pin="I2" pad="13"/>
                                        <connect gate="A" pin="O" pad="12"/>
                                        <connect gate="B" pin="I0" pad="3"/>
                                        <connect gate="B" pin="I1" pad="4"/>
                                        <connect gate="B" pin="I2" pad="5"/>
                                        <connect gate="B" pin="O" pad="6"/>
                                        <connect gate="C" pin="I0" pad="9"/>
                                        <connect gate="C" pin="I1" pad="10"/>
                                        <connect gate="C" pin="I2" pad="11"/>
                                        <connect gate="C" pin="O" pad="8"/>
                                        <connect gate="P" pin="GND" pad="7"/>
                                        <connect gate="P" pin="VCC" pad="14"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:2917/1"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="ALS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="AS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="FK" package="LCC20">
                                    <connects>
                                        <connect gate="A" pin="I0" pad="2"/>
                                        <connect gate="A" pin="I1" pad="3"/>
                                        <connect gate="A" pin="I2" pad="19"/>
                                        <connect gate="A" pin="O" pad="18"/>
                                        <connect gate="B" pin="I0" pad="4"/>
                                        <connect gate="B" pin="I1" pad="6"/>
                                        <connect gate="B" pin="I2" pad="8"/>
                                        <connect gate="B" pin="O" pad="9"/>
                                        <connect gate="C" pin="I0" pad="13"/>
                                        <connect gate="C" pin="I1" pad="14"/>
                                        <connect gate="C" pin="I2" pad="16"/>
                                        <connect gate="C" pin="O" pad="12"/>
                                        <connect gate="P" pin="GND" pad="10"/>
                                        <connect gate="P" pin="VCC" pad="20"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:2919/1"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="ALS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="AS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                        <technology name="LS">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                    </devicesets>
                </library>
                <library name="texas-sn55-sn75" urn="urn:adsk.eagle:library:386">
                    <description>&lt;b&gt;Texas Instruments Devices, SN55xx, SN75xx Series&lt;/b&gt;&lt;p&gt;
                        &lt;author&gt;Created by librarian@cadsoft.de&lt;/author&gt;
                    </description>
                    <packages>
                        <package name="DIL08" urn="urn:adsk.eagle:footprint:29416/1" library_version="3">
                            <description>&lt;b&gt;Dual In Line Package&lt;/b&gt;</description>
                            <wire x1="5.08" y1="2.921" x2="-5.08" y2="2.921" width="0.1524" layer="21"/>
                            <wire x1="-5.08" y1="-2.921" x2="5.08" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="5.08" y1="2.921" x2="5.08" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="-5.08" y1="2.921" x2="-5.08" y2="1.016" width="0.1524" layer="21"/>
                            <wire x1="-5.08" y1="-2.921" x2="-5.08" y2="-1.016" width="0.1524" layer="21"/>
                            <wire x1="-5.08" y1="1.016" x2="-5.08" y2="-1.016" width="0.1524" layer="21" curve="-180"/>
                            <pad name="1" x="-3.81" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="2" x="-1.27" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="7" x="-1.27" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="8" x="-3.81" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="3" x="1.27" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="4" x="3.81" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="6" x="1.27" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="5" x="3.81" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <text x="-5.334" y="-2.921" size="1.27" layer="25" ratio="10" rot="R90">&gt;NAME</text>
                            <text x="-3.556" y="-0.635" size="1.27" layer="27" ratio="10">&gt;VALUE</text>
                        </package>
                        <package name="D_R-PDSO-G8" urn="urn:adsk.eagle:footprint:3291/1" library_version="3">
                            <description>&lt;b&gt;D (R-PDSO-G8)&lt;/b&gt;&lt;p&gt;
                                Source: http://focus.ti.com/lit/ds/slos063b/slos063b.pdf
                            </description>
                            <wire x1="2.4" y1="1.9" x2="2.4" y2="-1.4" width="0.2032" layer="21"/>
                            <wire x1="2.4" y1="-1.4" x2="2.4" y2="-1.9" width="0.2032" layer="21"/>
                            <wire x1="2.4" y1="-1.9" x2="-2.4" y2="-1.9" width="0.2032" layer="51"/>
                            <wire x1="-2.4" y1="-1.9" x2="-2.4" y2="-1.4" width="0.2032" layer="21"/>
                            <wire x1="-2.4" y1="-1.4" x2="-2.4" y2="1.9" width="0.2032" layer="21"/>
                            <wire x1="-2.4" y1="1.9" x2="2.4" y2="1.9" width="0.2032" layer="51"/>
                            <wire x1="2.4" y1="-1.4" x2="-2.4" y2="-1.4" width="0.2032" layer="21"/>
                            <smd name="2" x="-0.635" y="-2.75" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="7" x="-0.635" y="2.75" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="1" x="-1.905" y="-2.75" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="3" x="0.635" y="-2.75" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="4" x="1.905" y="-2.75" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="8" x="-1.905" y="2.75" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="6" x="0.635" y="2.75" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="5" x="1.905" y="2.75" dx="0.6" dy="1.5" layer="1"/>
                            <text x="-2.667" y="-1.905" size="1.27" layer="25" rot="R90">&gt;NAME</text>
                            <text x="3.937" y="-1.905" size="1.27" layer="27" rot="R90">&gt;VALUE</text>
                            <rectangle x1="-2.15" y1="-3.2" x2="-1.66" y2="-2" layer="51"/>
                            <rectangle x1="-0.88" y1="-3.2" x2="-0.39" y2="-2" layer="51"/>
                            <rectangle x1="0.39" y1="-3.2" x2="0.88" y2="-2" layer="51"/>
                            <rectangle x1="1.66" y1="-3.2" x2="2.15" y2="-2" layer="51"/>
                            <rectangle x1="1.66" y1="2" x2="2.15" y2="3.2" layer="51"/>
                            <rectangle x1="0.39" y1="2" x2="0.88" y2="3.2" layer="51"/>
                            <rectangle x1="-0.88" y1="2" x2="-0.39" y2="3.2" layer="51"/>
                            <rectangle x1="-2.15" y1="2" x2="-1.66" y2="3.2" layer="51"/>
                        </package>
                        <package name="PS_R-PDSO-G8" urn="urn:adsk.eagle:footprint:27997/1" library_version="3">
                            <description>&lt;b&gt;PS (R-PDSO-G8)&lt;/b&gt;&lt;p&gt;
                                Source: www.ti.com sn75452b.pdf
                            </description>
                            <wire x1="3.15" y1="2.675" x2="3.15" y2="-2.675" width="0.2032" layer="21"/>
                            <wire x1="3.15" y1="-2.675" x2="-3.125" y2="-2.675" width="0.2032" layer="51"/>
                            <wire x1="-3.125" y1="-2.675" x2="-3.125" y2="2.675" width="0.2032" layer="21"/>
                            <wire x1="-3.125" y1="2.675" x2="3.15" y2="2.675" width="0.2032" layer="51"/>
                            <smd name="2" x="-0.635" y="-3.685" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="7" x="-0.635" y="3.7" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="1" x="-1.905" y="-3.685" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="3" x="0.635" y="-3.685" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="4" x="1.905" y="-3.685" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="8" x="-1.905" y="3.7" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="6" x="0.635" y="3.7" dx="0.6" dy="1.5" layer="1"/>
                            <smd name="5" x="1.905" y="3.7" dx="0.6" dy="1.5" layer="1"/>
                            <text x="-3.55" y="-2.925" size="1.27" layer="25" rot="R90">&gt;NAME</text>
                            <text x="4.737" y="-2.93" size="1.27" layer="27" rot="R90">&gt;VALUE</text>
                            <rectangle x1="-2.15" y1="-4.1" x2="-1.66" y2="-2.8" layer="51"/>
                            <rectangle x1="-0.88" y1="-4.1" x2="-0.39" y2="-2.8" layer="51"/>
                            <rectangle x1="0.39" y1="-4.1" x2="0.88" y2="-2.8" layer="51"/>
                            <rectangle x1="1.66" y1="-4.1" x2="2.15" y2="-2.8" layer="51"/>
                            <rectangle x1="1.66" y1="2.8" x2="2.15" y2="4.1" layer="51"/>
                            <rectangle x1="0.39" y1="2.8" x2="0.88" y2="4.1" layer="51"/>
                            <rectangle x1="-0.88" y1="2.8" x2="-0.39" y2="4.1" layer="51"/>
                            <rectangle x1="-2.15" y1="2.8" x2="-1.66" y2="4.1" layer="51"/>
                            <circle x="-2.205" y="-1.595" radius="0.388971875" width="0.2032" layer="21"/>
                        </package>
                    </packages>
                    <packages3d>
                        <package3d name="DIL08" urn="urn:adsk.eagle:package:29519/2" type="model" library_version="3">
                            <description>Dual In Line Package</description>
                            <packageinstances>
                                <packageinstance name="DIL08"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="D_R-PDSO-G8" urn="urn:adsk.eagle:package:3309/2" type="model"
                                   library_version="3">
                            <description>D (R-PDSO-G8)
                                Source: http://focus.ti.com/lit/ds/slos063b/slos063b.pdf
                            </description>
                            <packageinstances>
                                <packageinstance name="D_R-PDSO-G8"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="PS_R-PDSO-G8" urn="urn:adsk.eagle:package:28004/2" type="model"
                                   library_version="3">
                            <description>PS (R-PDSO-G8)
                                Source: www.ti.com sn75452b.pdf
                            </description>
                            <packageinstances>
                                <packageinstance name="PS_R-PDSO-G8"/>
                            </packageinstances>
                        </package3d>
                    </packages3d>
                    <symbols>
                        <symbol name="NAND" urn="urn:adsk.eagle:symbol:27998/1" library_version="3">
                            <wire x1="-7.62" y1="5.08" x2="-7.62" y2="-5.08" width="0.4064" layer="94"/>
                            <wire x1="-7.62" y1="-5.08" x2="2.54" y2="-5.08" width="0.4064" layer="94"/>
                            <wire x1="2.54" y1="5.08" x2="-7.62" y2="5.08" width="0.4064" layer="94"/>
                            <wire x1="2.54" y1="5.08" x2="2.54" y2="-5.08" width="0.4064" layer="94" curve="-180"/>
                            <text x="-7.62" y="5.715" size="1.778" layer="95">&gt;NAME</text>
                            <text x="-7.62" y="-7.62" size="1.778" layer="96">&gt;VALUE</text>
                            <pin name="I0" x="-12.7" y="2.54" visible="pad" length="middle" direction="in"
                                 swaplevel="1"/>
                            <pin name="I1" x="-12.7" y="-2.54" visible="pad" length="middle" direction="in"
                                 swaplevel="1"/>
                            <pin name="O" x="12.7" y="0" visible="pad" length="middle" direction="out" function="dot"
                                 rot="R180"/>
                        </symbol>
                        <symbol name="PWRN" urn="urn:adsk.eagle:symbol:27994/1" library_version="3">
                            <text x="-0.635" y="-0.635" size="1.778" layer="95">&gt;NAME</text>
                            <text x="1.905" y="-6.35" size="1.27" layer="95" rot="R90">GND</text>
                            <text x="1.905" y="2.54" size="1.27" layer="95" rot="R90">VCC</text>
                            <pin name="GND" x="0" y="-7.62" visible="pad" length="middle" direction="pwr" rot="R90"/>
                            <pin name="VCC" x="0" y="7.62" visible="pad" length="middle" direction="pwr" rot="R270"/>
                        </symbol>
                    </symbols>
                    <devicesets>
                        <deviceset name="SN75452B" urn="urn:adsk.eagle:component:28008/3" prefix="IC"
                                   library_version="3">
                            <description>&lt;b&gt;NAND&lt;/b&gt; PERIPHERAL DRIVERS FOR HIGH-CURRENT SWITCHING AT VERY
                                HIGH SPEEDS&lt;p&gt;
                                Source: www.ti.com sn75452b.pdf
                            </description>
                            <gates>
                                <gate name="A" symbol="NAND" x="0" y="10.16"/>
                                <gate name="B" symbol="NAND" x="0" y="-10.16"/>
                                <gate name="P" symbol="PWRN" x="17.78" y="0"/>
                            </gates>
                            <devices>
                                <device name="P" package="DIL08">
                                    <connects>
                                        <connect gate="A" pin="I0" pad="1"/>
                                        <connect gate="A" pin="I1" pad="2"/>
                                        <connect gate="A" pin="O" pad="3"/>
                                        <connect gate="B" pin="I0" pad="7"/>
                                        <connect gate="B" pin="I1" pad="6"/>
                                        <connect gate="B" pin="O" pad="5"/>
                                        <connect gate="P" pin="GND" pad="4"/>
                                        <connect gate="P" pin="VCC" pad="8"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:29519/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name=""/>
                                    </technologies>
                                </device>
                                <device name="JG" package="DIL08">
                                    <connects>
                                        <connect gate="A" pin="I0" pad="1"/>
                                        <connect gate="A" pin="I1" pad="2"/>
                                        <connect gate="A" pin="O" pad="3"/>
                                        <connect gate="B" pin="I0" pad="7"/>
                                        <connect gate="B" pin="I1" pad="6"/>
                                        <connect gate="B" pin="O" pad="5"/>
                                        <connect gate="P" pin="GND" pad="4"/>
                                        <connect gate="P" pin="VCC" pad="8"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:29519/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name=""/>
                                    </technologies>
                                </device>
                                <device name="D" package="D_R-PDSO-G8">
                                    <connects>
                                        <connect gate="A" pin="I0" pad="1"/>
                                        <connect gate="A" pin="I1" pad="2"/>
                                        <connect gate="A" pin="O" pad="3"/>
                                        <connect gate="B" pin="I0" pad="7"/>
                                        <connect gate="B" pin="I1" pad="6"/>
                                        <connect gate="B" pin="O" pad="5"/>
                                        <connect gate="P" pin="GND" pad="4"/>
                                        <connect gate="P" pin="VCC" pad="8"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:3309/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name=""/>
                                    </technologies>
                                </device>
                                <device name="PS" package="PS_R-PDSO-G8">
                                    <connects>
                                        <connect gate="A" pin="I0" pad="1"/>
                                        <connect gate="A" pin="I1" pad="2"/>
                                        <connect gate="A" pin="O" pad="3"/>
                                        <connect gate="B" pin="I0" pad="7"/>
                                        <connect gate="B" pin="I1" pad="6"/>
                                        <connect gate="B" pin="O" pad="5"/>
                                        <connect gate="P" pin="GND" pad="4"/>
                                        <connect gate="P" pin="VCC" pad="8"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:28004/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name=""/>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                    </devicesets>
                </library>
                <library name="Resistor">
                    <description>&lt;B&gt;Resistors, Potentiometers, TrimPot</description>
                    <packages>
                        <package name="RESC1005X40" urn="urn:adsk.eagle:footprint:16378540/2">
                            <description>Chip, 1.05 X 0.54 X 0.40 mm body
                                &lt;p&gt;Chip package with body size 1.05 X 0.54 X 0.40 mm&lt;/p&gt;
                            </description>
                            <wire x1="0.55" y1="0.636" x2="-0.55" y2="0.636" width="0.127" layer="21"/>
                            <wire x1="0.55" y1="-0.636" x2="-0.55" y2="-0.636" width="0.127" layer="21"/>
                            <wire x1="0.55" y1="-0.3" x2="-0.55" y2="-0.3" width="0.12" layer="51"/>
                            <wire x1="-0.55" y1="-0.3" x2="-0.55" y2="0.3" width="0.12" layer="51"/>
                            <wire x1="-0.55" y1="0.3" x2="0.55" y2="0.3" width="0.12" layer="51"/>
                            <wire x1="0.55" y1="0.3" x2="0.55" y2="-0.3" width="0.12" layer="51"/>
                            <smd name="1" x="-0.5075" y="0" dx="0.5351" dy="0.644" layer="1"/>
                            <smd name="2" x="0.5075" y="0" dx="0.5351" dy="0.644" layer="1"/>
                            <text x="0" y="1.271" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-1.271" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESC1608X60" urn="urn:adsk.eagle:footprint:16378537/2">
                            <description>Chip, 1.60 X 0.82 X 0.60 mm body
                                &lt;p&gt;Chip package with body size 1.60 X 0.82 X 0.60 mm&lt;/p&gt;
                            </description>
                            <wire x1="0.85" y1="0.8009" x2="-0.85" y2="0.8009" width="0.127" layer="21"/>
                            <wire x1="0.85" y1="-0.8009" x2="-0.85" y2="-0.8009" width="0.127" layer="21"/>
                            <wire x1="0.85" y1="-0.475" x2="-0.85" y2="-0.475" width="0.12" layer="51"/>
                            <wire x1="-0.85" y1="-0.475" x2="-0.85" y2="0.475" width="0.12" layer="51"/>
                            <wire x1="-0.85" y1="0.475" x2="0.85" y2="0.475" width="0.12" layer="51"/>
                            <wire x1="0.85" y1="0.475" x2="0.85" y2="-0.475" width="0.12" layer="51"/>
                            <smd name="1" x="-0.8152" y="0" dx="0.7987" dy="0.9739" layer="1"/>
                            <smd name="2" x="0.8152" y="0" dx="0.7987" dy="0.9739" layer="1"/>
                            <text x="0" y="1.4359" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-1.4359" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESC2012X65" urn="urn:adsk.eagle:footprint:16378532/2">
                            <description>Chip, 2.00 X 1.25 X 0.65 mm body
                                &lt;p&gt;Chip package with body size 2.00 X 1.25 X 0.65 mm&lt;/p&gt;
                            </description>
                            <wire x1="1.075" y1="1.0241" x2="-1.075" y2="1.0241" width="0.127" layer="21"/>
                            <wire x1="1.075" y1="-1.0241" x2="-1.075" y2="-1.0241" width="0.127" layer="21"/>
                            <wire x1="1.075" y1="-0.7" x2="-1.075" y2="-0.7" width="0.12" layer="51"/>
                            <wire x1="-1.075" y1="-0.7" x2="-1.075" y2="0.7" width="0.12" layer="51"/>
                            <wire x1="-1.075" y1="0.7" x2="1.075" y2="0.7" width="0.12" layer="51"/>
                            <wire x1="1.075" y1="0.7" x2="1.075" y2="-0.7" width="0.12" layer="51"/>
                            <smd name="1" x="-0.9195" y="0" dx="1.0312" dy="1.4202" layer="1"/>
                            <smd name="2" x="0.9195" y="0" dx="1.0312" dy="1.4202" layer="1"/>
                            <text x="0" y="1.6591" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-1.6591" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESC3216X70" urn="urn:adsk.eagle:footprint:16378539/2">
                            <description>Chip, 3.20 X 1.60 X 0.70 mm body
                                &lt;p&gt;Chip package with body size 3.20 X 1.60 X 0.70 mm&lt;/p&gt;
                            </description>
                            <wire x1="1.7" y1="1.2217" x2="-1.7" y2="1.2217" width="0.127" layer="21"/>
                            <wire x1="1.7" y1="-1.2217" x2="-1.7" y2="-1.2217" width="0.127" layer="21"/>
                            <wire x1="1.7" y1="-0.9" x2="-1.7" y2="-0.9" width="0.12" layer="51"/>
                            <wire x1="-1.7" y1="-0.9" x2="-1.7" y2="0.9" width="0.12" layer="51"/>
                            <wire x1="-1.7" y1="0.9" x2="1.7" y2="0.9" width="0.12" layer="51"/>
                            <wire x1="1.7" y1="0.9" x2="1.7" y2="-0.9" width="0.12" layer="51"/>
                            <smd name="1" x="-1.4754" y="0" dx="1.1646" dy="1.8153" layer="1"/>
                            <smd name="2" x="1.4754" y="0" dx="1.1646" dy="1.8153" layer="1"/>
                            <text x="0" y="1.8567" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-1.8567" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESC3224X71" urn="urn:adsk.eagle:footprint:16378536/2">
                            <description>Chip, 3.20 X 2.49 X 0.71 mm body
                                &lt;p&gt;Chip package with body size 3.20 X 2.49 X 0.71 mm&lt;/p&gt;
                            </description>
                            <wire x1="1.675" y1="1.6441" x2="-1.675" y2="1.6441" width="0.127" layer="21"/>
                            <wire x1="1.675" y1="-1.6441" x2="-1.675" y2="-1.6441" width="0.127" layer="21"/>
                            <wire x1="1.675" y1="-1.32" x2="-1.675" y2="-1.32" width="0.12" layer="51"/>
                            <wire x1="-1.675" y1="-1.32" x2="-1.675" y2="1.32" width="0.12" layer="51"/>
                            <wire x1="-1.675" y1="1.32" x2="1.675" y2="1.32" width="0.12" layer="51"/>
                            <wire x1="1.675" y1="1.32" x2="1.675" y2="-1.32" width="0.12" layer="51"/>
                            <smd name="1" x="-1.4695" y="0" dx="1.1312" dy="2.6602" layer="1"/>
                            <smd name="2" x="1.4695" y="0" dx="1.1312" dy="2.6602" layer="1"/>
                            <text x="0" y="2.2791" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-2.2791" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESC5025X71" urn="urn:adsk.eagle:footprint:16378538/2">
                            <description>Chip, 5.00 X 2.50 X 0.71 mm body
                                &lt;p&gt;Chip package with body size 5.00 X 2.50 X 0.71 mm&lt;/p&gt;
                            </description>
                            <wire x1="2.575" y1="1.6491" x2="-2.575" y2="1.6491" width="0.127" layer="21"/>
                            <wire x1="2.575" y1="-1.6491" x2="-2.575" y2="-1.6491" width="0.127" layer="21"/>
                            <wire x1="2.575" y1="-1.325" x2="-2.575" y2="-1.325" width="0.12" layer="51"/>
                            <wire x1="-2.575" y1="-1.325" x2="-2.575" y2="1.325" width="0.12" layer="51"/>
                            <wire x1="-2.575" y1="1.325" x2="2.575" y2="1.325" width="0.12" layer="51"/>
                            <wire x1="2.575" y1="1.325" x2="2.575" y2="-1.325" width="0.12" layer="51"/>
                            <smd name="1" x="-2.3195" y="0" dx="1.2312" dy="2.6702" layer="1"/>
                            <smd name="2" x="2.3195" y="0" dx="1.2312" dy="2.6702" layer="1"/>
                            <text x="0" y="2.2841" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-2.2841" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESC6332X71" urn="urn:adsk.eagle:footprint:16378533/2">
                            <description>Chip, 6.30 X 3.20 X 0.71 mm body
                                &lt;p&gt;Chip package with body size 6.30 X 3.20 X 0.71 mm&lt;/p&gt;
                            </description>
                            <wire x1="3.225" y1="1.9991" x2="-3.225" y2="1.9991" width="0.127" layer="21"/>
                            <wire x1="3.225" y1="-1.9991" x2="-3.225" y2="-1.9991" width="0.127" layer="21"/>
                            <wire x1="3.225" y1="-1.675" x2="-3.225" y2="-1.675" width="0.12" layer="51"/>
                            <wire x1="-3.225" y1="-1.675" x2="-3.225" y2="1.675" width="0.12" layer="51"/>
                            <wire x1="-3.225" y1="1.675" x2="3.225" y2="1.675" width="0.12" layer="51"/>
                            <wire x1="3.225" y1="1.675" x2="3.225" y2="-1.675" width="0.12" layer="51"/>
                            <smd name="1" x="-2.9695" y="0" dx="1.2312" dy="3.3702" layer="1"/>
                            <smd name="2" x="2.9695" y="0" dx="1.2312" dy="3.3702" layer="1"/>
                            <text x="0" y="2.6341" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-2.6341" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESAD1176W63L850D250B" urn="urn:adsk.eagle:footprint:16378542/2">
                            <description>AXIAL Resistor, 11.76 mm pitch, 8.5 mm body length, 2.5 mm body diameter
                                &lt;p&gt;AXIAL Resistor package with 11.76 mm pitch, 0.63 mm lead diameter, 8.5 mm body
                                length and 2.5 mm body diameter&lt;/p&gt;
                            </description>
                            <wire x1="-4.25" y1="1.25" x2="-4.25" y2="-1.25" width="0.127" layer="21"/>
                            <wire x1="-4.25" y1="-1.25" x2="4.25" y2="-1.25" width="0.127" layer="21"/>
                            <wire x1="4.25" y1="-1.25" x2="4.25" y2="1.25" width="0.127" layer="21"/>
                            <wire x1="4.25" y1="1.25" x2="-4.25" y2="1.25" width="0.127" layer="21"/>
                            <wire x1="-4.25" y1="0" x2="-4.911" y2="0" width="0.127" layer="21"/>
                            <wire x1="4.25" y1="0" x2="4.911" y2="0" width="0.127" layer="21"/>
                            <wire x1="4.25" y1="-1.25" x2="-4.25" y2="-1.25" width="0.12" layer="51"/>
                            <wire x1="-4.25" y1="-1.25" x2="-4.25" y2="1.25" width="0.12" layer="51"/>
                            <wire x1="-4.25" y1="1.25" x2="4.25" y2="1.25" width="0.12" layer="51"/>
                            <wire x1="4.25" y1="1.25" x2="4.25" y2="-1.25" width="0.12" layer="51"/>
                            <pad name="1" x="-5.88" y="0" drill="0.83" diameter="1.43"/>
                            <pad name="2" x="5.88" y="0" drill="0.83" diameter="1.43"/>
                            <text x="0" y="1.885" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-1.885" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESMELF3515" urn="urn:adsk.eagle:footprint:16378534/2">
                            <description>MELF, 3.50 mm length, 1.52 mm diameter
                                &lt;p&gt;MELF Resistor package with 3.50 mm length and 1.52 mm diameter&lt;/p&gt;
                            </description>
                            <wire x1="1.105" y1="1.1825" x2="-1.105" y2="1.1825" width="0.127" layer="21"/>
                            <wire x1="-1.105" y1="-1.1825" x2="1.105" y2="-1.1825" width="0.127" layer="21"/>
                            <wire x1="1.85" y1="-0.8" x2="-1.85" y2="-0.8" width="0.12" layer="51"/>
                            <wire x1="-1.85" y1="-0.8" x2="-1.85" y2="0.8" width="0.12" layer="51"/>
                            <wire x1="-1.85" y1="0.8" x2="1.85" y2="0.8" width="0.12" layer="51"/>
                            <wire x1="1.85" y1="0.8" x2="1.85" y2="-0.8" width="0.12" layer="51"/>
                            <smd name="1" x="-1.6813" y="0" dx="1.1527" dy="1.7371" layer="1"/>
                            <smd name="2" x="1.6813" y="0" dx="1.1527" dy="1.7371" layer="1"/>
                            <text x="0" y="1.8175" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-1.8175" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESMELF2014" urn="urn:adsk.eagle:footprint:16378535/2">
                            <description>MELF, 2.00 mm length, 1.40 mm diameter
                                &lt;p&gt;MELF Resistor package with 2.00 mm length and 1.40 mm diameter&lt;/p&gt;
                            </description>
                            <wire x1="0.5189" y1="1.114" x2="-0.5189" y2="1.114" width="0.127" layer="21"/>
                            <wire x1="-0.5189" y1="-1.114" x2="0.5189" y2="-1.114" width="0.127" layer="21"/>
                            <wire x1="1.05" y1="-0.725" x2="-1.05" y2="-0.725" width="0.12" layer="51"/>
                            <wire x1="-1.05" y1="-0.725" x2="-1.05" y2="0.725" width="0.12" layer="51"/>
                            <wire x1="-1.05" y1="0.725" x2="1.05" y2="0.725" width="0.12" layer="51"/>
                            <wire x1="1.05" y1="0.725" x2="1.05" y2="-0.725" width="0.12" layer="51"/>
                            <smd name="1" x="-0.9918" y="0" dx="0.9456" dy="1.6" layer="1"/>
                            <smd name="2" x="0.9918" y="0" dx="0.9456" dy="1.6" layer="1"/>
                            <text x="0" y="1.749" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-1.749" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESMELF5924" urn="urn:adsk.eagle:footprint:16378541/2">
                            <description>MELF, 5.90 mm length, 2.45 mm diameter
                                &lt;p&gt;MELF Resistor package with 5.90 mm length and 2.45 mm diameter&lt;/p&gt;
                            </description>
                            <wire x1="2.1315" y1="1.639" x2="-2.1315" y2="1.639" width="0.127" layer="21"/>
                            <wire x1="-2.1315" y1="-1.639" x2="2.1315" y2="-1.639" width="0.127" layer="21"/>
                            <wire x1="3.05" y1="-1.25" x2="-3.05" y2="-1.25" width="0.12" layer="51"/>
                            <wire x1="-3.05" y1="-1.25" x2="-3.05" y2="1.25" width="0.12" layer="51"/>
                            <wire x1="-3.05" y1="1.25" x2="3.05" y2="1.25" width="0.12" layer="51"/>
                            <wire x1="3.05" y1="1.25" x2="3.05" y2="-1.25" width="0.12" layer="51"/>
                            <smd name="1" x="-2.7946" y="0" dx="1.3261" dy="2.65" layer="1"/>
                            <smd name="2" x="2.7946" y="0" dx="1.3261" dy="2.65" layer="1"/>
                            <text x="0" y="2.274" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-2.274" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESMELF3218" urn="urn:adsk.eagle:footprint:16378531/2">
                            <description>MELF, 3.20 mm length, 1.80 mm diameter
                                &lt;p&gt;MELF Resistor package with 3.20 mm length and 1.80 mm diameter&lt;/p&gt;
                            </description>
                            <wire x1="0.8815" y1="1.314" x2="-0.8815" y2="1.314" width="0.127" layer="21"/>
                            <wire x1="-0.8815" y1="-1.314" x2="0.8815" y2="-1.314" width="0.127" layer="21"/>
                            <wire x1="1.7" y1="-0.925" x2="-1.7" y2="-0.925" width="0.12" layer="51"/>
                            <wire x1="-1.7" y1="-0.925" x2="-1.7" y2="0.925" width="0.12" layer="51"/>
                            <wire x1="-1.7" y1="0.925" x2="1.7" y2="0.925" width="0.12" layer="51"/>
                            <wire x1="1.7" y1="0.925" x2="1.7" y2="-0.925" width="0.12" layer="51"/>
                            <smd name="1" x="-1.4946" y="0" dx="1.2261" dy="2" layer="1"/>
                            <smd name="2" x="1.4946" y="0" dx="1.2261" dy="2" layer="1"/>
                            <text x="0" y="1.949" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-1.949" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                        <package name="RESAD724W46L381D178B" urn="urn:adsk.eagle:footprint:16378530/2">
                            <description>Axial Resistor, 7.24 mm pitch, 3.81 mm body length, 1.78 mm body diameter
                                &lt;p&gt;Axial Resistor package with 7.24 mm pitch (lead spacing), 0.46 mm lead
                                diameter, 3.81 mm body length and 1.78 mm body diameter&lt;/p&gt;
                            </description>
                            <wire x1="-2.16" y1="1.015" x2="-2.16" y2="-1.015" width="0.127" layer="21"/>
                            <wire x1="-2.16" y1="-1.015" x2="2.16" y2="-1.015" width="0.127" layer="21"/>
                            <wire x1="2.16" y1="-1.015" x2="2.16" y2="1.015" width="0.127" layer="21"/>
                            <wire x1="2.16" y1="1.015" x2="-2.16" y2="1.015" width="0.127" layer="21"/>
                            <wire x1="-2.16" y1="0" x2="-2.736" y2="0" width="0.127" layer="21"/>
                            <wire x1="2.16" y1="0" x2="2.736" y2="0" width="0.127" layer="21"/>
                            <wire x1="2.16" y1="-1.015" x2="-2.16" y2="-1.015" width="0.12" layer="51"/>
                            <wire x1="-2.16" y1="-1.015" x2="-2.16" y2="1.015" width="0.12" layer="51"/>
                            <wire x1="-2.16" y1="1.015" x2="2.16" y2="1.015" width="0.12" layer="51"/>
                            <wire x1="2.16" y1="1.015" x2="2.16" y2="-1.015" width="0.12" layer="51"/>
                            <pad name="1" x="-3.62" y="0" drill="0.66" diameter="1.26"/>
                            <pad name="2" x="3.62" y="0" drill="0.66" diameter="1.26"/>
                            <text x="0" y="1.65" size="1.27" layer="25" align="bottom-center">&gt;NAME</text>
                            <text x="0" y="-1.65" size="1.27" layer="27" align="top-center">&gt;VALUE</text>
                        </package>
                    </packages>
                    <packages3d>
                        <package3d name="RESC1005X40" urn="urn:adsk.eagle:package:16378568/2" type="model">
                            <description>Chip, 1.05 X 0.54 X 0.40 mm body
                                &lt;p&gt;Chip package with body size 1.05 X 0.54 X 0.40 mm&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESC1005X40"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESC1608X60" urn="urn:adsk.eagle:package:16378565/2" type="model">
                            <description>Chip, 1.60 X 0.82 X 0.60 mm body
                                &lt;p&gt;Chip package with body size 1.60 X 0.82 X 0.60 mm&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESC1608X60"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESC2012X65" urn="urn:adsk.eagle:package:16378559/2" type="model">
                            <description>Chip, 2.00 X 1.25 X 0.65 mm body
                                &lt;p&gt;Chip package with body size 2.00 X 1.25 X 0.65 mm&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESC2012X65"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESC3216X70" urn="urn:adsk.eagle:package:16378566/2" type="model">
                            <description>Chip, 3.20 X 1.60 X 0.70 mm body
                                &lt;p&gt;Chip package with body size 3.20 X 1.60 X 0.70 mm&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESC3216X70"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESC3224X71" urn="urn:adsk.eagle:package:16378563/3" type="model">
                            <description>Chip, 3.20 X 2.49 X 0.71 mm body
                                &lt;p&gt;Chip package with body size 3.20 X 2.49 X 0.71 mm&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESC3224X71"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESC5025X71" urn="urn:adsk.eagle:package:16378564/2" type="model">
                            <description>Chip, 5.00 X 2.50 X 0.71 mm body
                                &lt;p&gt;Chip package with body size 5.00 X 2.50 X 0.71 mm&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESC5025X71"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESC6332X71L" urn="urn:adsk.eagle:package:16378557/3" type="model">
                            <description>Chip, 6.30 X 3.20 X 0.71 mm body
                                &lt;p&gt;Chip package with body size 6.30 X 3.20 X 0.71 mm&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESC6332X71"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESAD1176W63L850D250B" urn="urn:adsk.eagle:package:16378560/2" type="model">
                            <description>AXIAL Resistor, 11.76 mm pitch, 8.5 mm body length, 2.5 mm body diameter
                                &lt;p&gt;AXIAL Resistor package with 11.76 mm pitch, 0.63 mm lead diameter, 8.5 mm body
                                length and 2.5 mm body diameter&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESAD1176W63L850D250B"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESMELF3515" urn="urn:adsk.eagle:package:16378562/2" type="model">
                            <description>MELF, 3.50 mm length, 1.52 mm diameter
                                &lt;p&gt;MELF Resistor package with 3.50 mm length and 1.52 mm diameter&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESMELF3515"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESMELF2014" urn="urn:adsk.eagle:package:16378558/2" type="model">
                            <description>MELF, 2.00 mm length, 1.40 mm diameter
                                &lt;p&gt;MELF Resistor package with 2.00 mm length and 1.40 mm diameter&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESMELF2014"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESMELF5924" urn="urn:adsk.eagle:package:16378567/3" type="model">
                            <description>MELF, 5.90 mm length, 2.45 mm diameter
                                &lt;p&gt;MELF Resistor package with 5.90 mm length and 2.45 mm diameter&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESMELF5924"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESMELF3218" urn="urn:adsk.eagle:package:16378556/2" type="model">
                            <description>MELF, 3.20 mm length, 1.80 mm diameter
                                &lt;p&gt;MELF Resistor package with 3.20 mm length and 1.80 mm diameter&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESMELF3218"/>
                            </packageinstances>
                        </package3d>
                        <package3d name="RESAD724W46L381D178B" urn="urn:adsk.eagle:package:16378561/2" type="model">
                            <description>Axial Resistor, 7.24 mm pitch, 3.81 mm body length, 1.78 mm body diameter
                                &lt;p&gt;Axial Resistor package with 7.24 mm pitch (lead spacing), 0.46 mm lead
                                diameter, 3.81 mm body length and 1.78 mm body diameter&lt;/p&gt;
                            </description>
                            <packageinstances>
                                <packageinstance name="RESAD724W46L381D178B"/>
                            </packageinstances>
                        </package3d>
                    </packages3d>
                    <symbols>
                        <symbol name="R-US" urn="urn:adsk.eagle:symbol:16378528/2">
                            <wire x1="-2.54" y1="0" x2="-2.159" y2="1.016" width="0.2032" layer="94"/>
                            <wire x1="-2.159" y1="1.016" x2="-1.524" y2="-1.016" width="0.2032" layer="94"/>
                            <wire x1="-1.524" y1="-1.016" x2="-0.889" y2="1.016" width="0.2032" layer="94"/>
                            <wire x1="-0.889" y1="1.016" x2="-0.254" y2="-1.016" width="0.2032" layer="94"/>
                            <wire x1="-0.254" y1="-1.016" x2="0.381" y2="1.016" width="0.2032" layer="94"/>
                            <wire x1="0.381" y1="1.016" x2="1.016" y2="-1.016" width="0.2032" layer="94"/>
                            <wire x1="1.016" y1="-1.016" x2="1.651" y2="1.016" width="0.2032" layer="94"/>
                            <wire x1="1.651" y1="1.016" x2="2.286" y2="-1.016" width="0.2032" layer="94"/>
                            <wire x1="2.286" y1="-1.016" x2="2.54" y2="0" width="0.2032" layer="94"/>
                            <text x="0" y="2.7686" size="1.778" layer="95" align="center">&gt;NAME</text>
                            <text x="0" y="-3.302" size="1.778" layer="96" align="center">&gt;VALUE</text>
                            <pin name="2" x="5.08" y="0" visible="off" length="short" direction="pas" swaplevel="1"
                                 rot="R180"/>
                            <pin name="1" x="-5.08" y="0" visible="off" length="short" direction="pas" swaplevel="1"/>
                        </symbol>
                    </symbols>
                    <devicesets>
                        <deviceset name="R-US" urn="urn:adsk.eagle:component:16378569/7" prefix="R">
                            <description>&lt;B&gt;Resistor Fixed - ANSI</description>
                            <gates>
                                <gate name="G$1" symbol="R-US" x="0" y="0"/>
                            </gates>
                            <devices>
                                <device name="CHIP-0402(1005-METRIC)" package="RESC1005X40">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378568/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="CHIP-0603(1608-METRIC)" package="RESC1608X60">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378565/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="CHIP-0805(2012-METRIC)" package="RESC2012X65">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378559/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="CHIP-1206(3216-METRIC)" package="RESC3216X70">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378566/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="CHIP-1210(3225-METRIC)" package="RESC3224X71">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378563/3"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="CHIP-2010(5025-METRIC)" package="RESC5025X71">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378564/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="CHIP-2512(6332-METRIC)" package="RESC6332X71">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378557/3"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="AXIAL-11.7MM-PITCH" package="RESAD1176W63L850D250B">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378560/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="MELF(3515-METRIC)" package="RESMELF3515">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378562/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="MELF(2014-METRIC)" package="RESMELF2014">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378558/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="MELF(5924-METRIC)" package="RESMELF5924">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378567/3"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="MELF(3218-METRIC)" package="RESMELF3218">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378556/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                                <device name="AXIAL-7.2MM-PITCH" package="RESAD724W46L381D178B">
                                    <connects>
                                        <connect gate="G$1" pin="1" pad="1"/>
                                        <connect gate="G$1" pin="2" pad="2"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16378561/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="_">
                                            <attribute name="CATEGORY" value="Resistor" constant="no"/>
                                            <attribute name="MANUFACTURER" value="" constant="no"/>
                                            <attribute name="MPN" value="" constant="no"/>
                                            <attribute name="OPERATING_TEMP" value="" constant="no"/>
                                            <attribute name="PART_STATUS" value="" constant="no"/>
                                            <attribute name="RATING" value="" constant="no"/>
                                            <attribute name="ROHS_COMPLIANT" value="" constant="no"/>
                                            <attribute name="SERIES" value="" constant="no"/>
                                            <attribute name="SUB-CATEGORY" value="Fixed" constant="no"/>
                                            <attribute name="THERMALLOSS" value="" constant="no"/>
                                            <attribute name="TOLERANCE" value="" constant="no"/>
                                            <attribute name="TYPE" value="" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                            </devices>
                            <spice>
                                <pinmapping spiceprefix="R">
                                    <pinmap gate="G$1" pin="1" pinorder="1"/>
                                    <pinmap gate="G$1" pin="2" pinorder="2"/>
                                </pinmapping>
                            </spice>
                        </deviceset>
                    </devicesets>
                </library>
                <library name="74ttl-din" urn="urn:adsk.eagle:library:84">
                    <description>&lt;b&gt;TTL Devices with DIN Symbols&lt;/b&gt;&lt;p&gt;
                        CadSoft and the author do not warrant that this library is free from error
                        or will meet your specific requirements.&lt;p&gt;
                        &lt;author&gt;Created by Holger Bettenbühl, hol.bet.@rhein-main.net&lt;/author&gt;
                    </description>
                    <packages>
                        <package name="DIL14" urn="urn:adsk.eagle:footprint:16136/1" library_version="6">
                            <description>&lt;b&gt;Dual In Line Package&lt;/b&gt;</description>
                            <wire x1="8.89" y1="2.921" x2="-8.89" y2="2.921" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="-2.921" x2="8.89" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="8.89" y1="2.921" x2="8.89" y2="-2.921" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="2.921" x2="-8.89" y2="1.016" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="-2.921" x2="-8.89" y2="-1.016" width="0.1524" layer="21"/>
                            <wire x1="-8.89" y1="1.016" x2="-8.89" y2="-1.016" width="0.1524" layer="21" curve="-180"/>
                            <pad name="1" x="-7.62" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="2" x="-5.08" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="7" x="7.62" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="8" x="7.62" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="3" x="-2.54" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="4" x="0" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="6" x="5.08" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="5" x="2.54" y="-3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="9" x="5.08" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="10" x="2.54" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="11" x="0" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="12" x="-2.54" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="13" x="-5.08" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <pad name="14" x="-7.62" y="3.81" drill="0.8128" shape="long" rot="R90"/>
                            <text x="-9.271" y="-3.048" size="1.27" layer="25" ratio="10" rot="R90">&gt;NAME</text>
                            <text x="-6.731" y="-0.635" size="1.27" layer="27" ratio="10">&gt;VALUE</text>
                        </package>
                    </packages>
                    <packages3d>
                        <package3d name="DIL14" urn="urn:adsk.eagle:package:16407/2" type="model" library_version="6">
                            <description>Dual In Line Package</description>
                            <packageinstances>
                                <packageinstance name="DIL14"/>
                            </packageinstances>
                        </package3d>
                    </packages3d>
                    <symbols>
                        <symbol name="+UB" urn="urn:adsk.eagle:symbol:1255/1" library_version="6">
                            <circle x="0" y="-0.635" radius="0.635" width="0.1524" layer="94"/>
                            <text x="1.27" y="-1.27" size="1.524" layer="95">&gt;NAME</text>
                            <pin name="+UB" x="0" y="2.54" visible="pad" length="short" direction="pwr" rot="R270"/>
                        </symbol>
                        <symbol name="-UB" urn="urn:adsk.eagle:symbol:1256/1" library_version="6">
                            <wire x1="0" y1="-0.635" x2="0" y2="0.635" width="0" layer="94"/>
                            <wire x1="0.635" y1="0" x2="-0.635" y2="0" width="0" layer="94"/>
                            <circle x="0" y="0.635" radius="0.635" width="0.1524" layer="94"/>
                            <text x="1.27" y="0" size="1.524" layer="95">&gt;NAME</text>
                            <pin name="-UB" x="0" y="-2.54" visible="pad" length="short" direction="pwr" rot="R90"/>
                        </symbol>
                        <symbol name="180" urn="urn:adsk.eagle:symbol:1318/1" library_version="6">
                            <wire x1="-10.16" y1="-27.94" x2="-10.16" y2="-25.4" width="0.254" layer="94"/>
                            <wire x1="-10.16" y1="15.24" x2="-7.62" y2="15.24" width="0.254" layer="94"/>
                            <wire x1="10.16" y1="15.24" x2="10.16" y2="5.08" width="0.254" layer="94"/>
                            <wire x1="-7.62" y1="15.24" x2="-7.62" y2="17.78" width="0.254" layer="94"/>
                            <wire x1="-7.62" y1="17.78" x2="-10.16" y2="17.78" width="0.254" layer="94"/>
                            <wire x1="-10.16" y1="27.94" x2="-10.16" y2="25.4" width="0.254" layer="94"/>
                            <wire x1="-10.16" y1="27.94" x2="10.16" y2="27.94" width="0.254" layer="94"/>
                            <wire x1="10.16" y1="17.78" x2="10.16" y2="27.94" width="0.254" layer="94"/>
                            <wire x1="10.16" y1="17.78" x2="7.62" y2="17.78" width="0.254" layer="94"/>
                            <wire x1="7.62" y1="15.24" x2="7.62" y2="17.78" width="0.254" layer="94"/>
                            <wire x1="7.62" y1="15.24" x2="10.16" y2="15.24" width="0.254" layer="94"/>
                            <wire x1="-7.62" y1="15.24" x2="0" y2="15.24" width="0.254" layer="94"/>
                            <wire x1="-10.16" y1="-27.94" x2="0" y2="-27.94" width="0.254" layer="94"/>
                            <wire x1="0" y1="-5.08" x2="10.16" y2="-5.08" width="0.254" layer="94"/>
                            <wire x1="10.16" y1="-5.08" x2="10.16" y2="-15.24" width="0.254" layer="94"/>
                            <wire x1="0" y1="15.24" x2="0" y2="1.905" width="0.254" layer="94"/>
                            <wire x1="0" y1="15.24" x2="7.62" y2="15.24" width="0.254" layer="94"/>
                            <wire x1="0" y1="0.635" x2="0" y2="-5.08" width="0.254" layer="94"/>
                            <wire x1="0" y1="-5.08" x2="0" y2="-19.685" width="0.254" layer="94"/>
                            <wire x1="0" y1="-20.955" x2="0" y2="-27.94" width="0.254" layer="94"/>
                            <wire x1="0" y1="-27.94" x2="10.16" y2="-27.94" width="0.254" layer="94"/>
                            <wire x1="-1.27" y1="-11.43" x2="1.27" y2="-11.43" width="0.254" layer="94"/>
                            <wire x1="-1.27" y1="10.16" x2="1.27" y2="10.16" width="0.254" layer="94"/>
                            <wire x1="10.16" y1="5.08" x2="12.7" y2="5.08" width="0.1524" layer="94"/>
                            <wire x1="10.16" y1="5.08" x2="10.16" y2="-5.08" width="0.254" layer="94"/>
                            <wire x1="10.16" y1="-15.24" x2="12.7" y2="-15.24" width="0.1524" layer="94"/>
                            <wire x1="10.16" y1="-15.24" x2="10.16" y2="-27.94" width="0.254" layer="94"/>
                            <wire x1="-12.7" y1="25.4" x2="-10.16" y2="25.4" width="0.1524" layer="94"/>
                            <wire x1="-10.16" y1="25.4" x2="-10.16" y2="20.32" width="0.254" layer="94"/>
                            <wire x1="-12.7" y1="20.32" x2="-10.16" y2="20.32" width="0.1524" layer="94"/>
                            <wire x1="-10.16" y1="20.32" x2="-10.16" y2="17.78" width="0.254" layer="94"/>
                            <wire x1="-12.7" y1="10.16" x2="-10.16" y2="10.16" width="0.1524" layer="94"/>
                            <wire x1="-10.16" y1="10.16" x2="-10.16" y2="15.24" width="0.254" layer="94"/>
                            <wire x1="-12.7" y1="5.08" x2="-10.16" y2="5.08" width="0.1524" layer="94"/>
                            <wire x1="-10.16" y1="5.08" x2="-10.16" y2="10.16" width="0.254" layer="94"/>
                            <wire x1="-12.7" y1="0" x2="-10.16" y2="0" width="0.1524" layer="94"/>
                            <wire x1="-10.16" y1="0" x2="-10.16" y2="5.08" width="0.254" layer="94"/>
                            <wire x1="-12.7" y1="-5.08" x2="-10.16" y2="-5.08" width="0.1524" layer="94"/>
                            <wire x1="-10.16" y1="-5.08" x2="-10.16" y2="0" width="0.254" layer="94"/>
                            <wire x1="-12.7" y1="-10.16" x2="-10.16" y2="-10.16" width="0.1524" layer="94"/>
                            <wire x1="-10.16" y1="-10.16" x2="-10.16" y2="-5.08" width="0.254" layer="94"/>
                            <wire x1="-12.7" y1="-15.24" x2="-10.16" y2="-15.24" width="0.1524" layer="94"/>
                            <wire x1="-10.16" y1="-15.24" x2="-10.16" y2="-10.16" width="0.254" layer="94"/>
                            <wire x1="-12.7" y1="-20.32" x2="-10.16" y2="-20.32" width="0.1524" layer="94"/>
                            <wire x1="-10.16" y1="-20.32" x2="-10.16" y2="-15.24" width="0.254" layer="94"/>
                            <wire x1="-12.7" y1="-25.4" x2="-10.16" y2="-25.4" width="0.1524" layer="94"/>
                            <wire x1="-10.16" y1="-25.4" x2="-10.16" y2="-20.32" width="0.254" layer="94"/>
                            <circle x="0" y="1.27" radius="0.635" width="0.254" layer="94"/>
                            <circle x="0" y="-20.32" radius="0.635" width="0.254" layer="94"/>
                            <text x="-6.35" y="12.065" size="2.032" layer="94">2k</text>
                            <text x="4.445" y="12.7" size="2.032" layer="94">=</text>
                            <text x="4.445" y="-7.62" size="2.032" layer="94">=</text>
                            <text x="1.905" y="8.89" size="2.032" layer="94">4</text>
                            <text x="1.905" y="-21.59" size="2.032" layer="94">4</text>
                            <text x="2.54" y="-12.7" size="2.032" layer="94">3</text>
                            <text x="1.905" y="0" size="2.032" layer="94">3</text>
                            <text x="-8.89" y="24.13" size="2.032" layer="94">G3</text>
                            <text x="-8.89" y="19.05" size="2.032" layer="94">G4</text>
                            <text x="-10.16" y="28.575" size="2.032" layer="95">&gt;NAME</text>
                            <text x="-10.16" y="-31.115" size="2.032" layer="96">&gt;VALUE</text>
                            <pin name="H" x="-15.24" y="-25.4" visible="pad" length="short" direction="in"/>
                            <pin name="G" x="-15.24" y="-20.32" visible="pad" length="short" direction="in"/>
                            <pin name="F" x="-15.24" y="-15.24" visible="pad" length="short" direction="in"/>
                            <pin name="E" x="-15.24" y="-10.16" visible="pad" length="short" direction="in"/>
                            <pin name="D" x="-15.24" y="-5.08" visible="pad" length="short" direction="in"/>
                            <pin name="C" x="-15.24" y="0" visible="pad" length="short" direction="in"/>
                            <pin name="B" x="-15.24" y="5.08" visible="pad" length="short" direction="in"/>
                            <pin name="A" x="-15.24" y="10.16" visible="pad" length="short" direction="in"/>
                            <pin name="ODD" x="-15.24" y="20.32" visible="pad" length="short" direction="in"/>
                            <pin name="EVEN" x="-15.24" y="25.4" visible="pad" length="short" direction="in"/>
                            <pin name="SEVEN" x="15.24" y="5.08" visible="pad" length="short" direction="out"
                                 rot="R180"/>
                            <pin name="SODD" x="15.24" y="-15.24" visible="pad" length="short" direction="out"
                                 rot="R180"/>
                        </symbol>
                    </symbols>
                    <devicesets>
                        <deviceset name="74*180" urn="urn:adsk.eagle:component:1497/5" prefix="V" library_version="6">
                            <description>9-bit odd/even &lt;B&gt;PARITY GENERATOR/CHECKER&lt;/b&gt;</description>
                            <gates>
                                <gate name="/+UB" symbol="+UB" x="17.78" y="12.7" addlevel="request"/>
                                <gate name="/-UB" symbol="-UB" x="17.78" y="-2.54" addlevel="request"/>
                                <gate name="1" symbol="180" x="0" y="0"/>
                            </gates>
                            <devices>
                                <device name="N" package="DIL14">
                                    <connects>
                                        <connect gate="/+UB" pin="+UB" pad="14"/>
                                        <connect gate="/-UB" pin="-UB" pad="7"/>
                                        <connect gate="1" pin="A" pad="8"/>
                                        <connect gate="1" pin="B" pad="9"/>
                                        <connect gate="1" pin="C" pad="10"/>
                                        <connect gate="1" pin="D" pad="11"/>
                                        <connect gate="1" pin="E" pad="12"/>
                                        <connect gate="1" pin="EVEN" pad="3"/>
                                        <connect gate="1" pin="F" pad="13"/>
                                        <connect gate="1" pin="G" pad="1"/>
                                        <connect gate="1" pin="H" pad="2"/>
                                        <connect gate="1" pin="ODD" pad="4"/>
                                        <connect gate="1" pin="SEVEN" pad="5"/>
                                        <connect gate="1" pin="SODD" pad="6"/>
                                    </connects>
                                    <package3dinstances>
                                        <package3dinstance package3d_urn="urn:adsk.eagle:package:16407/2"/>
                                    </package3dinstances>
                                    <technologies>
                                        <technology name="">
                                            <attribute name="POPULARITY" value="0" constant="no"/>
                                        </technology>
                                    </technologies>
                                </device>
                            </devices>
                        </deviceset>
                    </devicesets>
                </library>
            </libraries>
            <attributes>
            </attributes>
            <variantdefs>
            </variantdefs>
            <classes>
                <class number="0" name="default" width="0" drill="0">
                </class>
            </classes>
            <parts>
                <part name="U2" library="owen-library" library_urn="urn:adsk.wipprod:fs.file:vf.frPKTRgnS7OtKRM0piDRaQ"
                      deviceset="HD6821P" device="" value="HD6821P"/>
                <part name="U3" library="owen-library" library_urn="urn:adsk.wipprod:fs.file:vf.frPKTRgnS7OtKRM0piDRaQ"
                      deviceset="HD6821P" device=""/>
                <part name="J1" library="owen-library" library_urn="urn:adsk.wipprod:fs.file:vf.frPKTRgnS7OtKRM0piDRaQ"
                      deviceset="DIP16SOCKET" device="" value="DIP16SOCKET"/>
                <part name="J2" library="owen-library" library_urn="urn:adsk.wipprod:fs.file:vf.frPKTRgnS7OtKRM0piDRaQ"
                      deviceset="DIP16SOCKET" device=""/>
                <part name="SUPPLY1" library="Tutorial - Fusion 360" deviceset="GND" device=""/>
                <part name="SUPPLY2" library="Tutorial - Fusion 360" deviceset="GND" device=""/>
                <part name="U18" library="owen-library" library_urn="urn:adsk.wipprod:fs.file:vf.frPKTRgnS7OtKRM0piDRaQ"
                      deviceset="SN15836" device="N" package3d_urn="urn:adsk.eagle:package:16407/2"/>
                <part name="TP1" library="owen-library" library_urn="urn:adsk.wipprod:fs.file:vf.frPKTRgnS7OtKRM0piDRaQ"
                      deviceset="TESTPOINT" device=""/>
                <part name="U17" library="74xx-us" library_urn="urn:adsk.eagle:library:88" deviceset="74*123" device="N"
                      package3d_urn="urn:adsk.eagle:package:922/2" technology="LS"/>
                <part name="U8" library="74xx-us" library_urn="urn:adsk.eagle:library:88" deviceset="74*08" device="N"
                      package3d_urn="urn:adsk.eagle:package:16407/2" technology="AS"/>
                <part name="U9" library="74xx-us" library_urn="urn:adsk.eagle:library:88" deviceset="74*08" device="N"
                      package3d_urn="urn:adsk.eagle:package:16407/2" technology="AS"/>
                <part name="U10" library="74xx-us" library_urn="urn:adsk.eagle:library:88" deviceset="74*174" device="N"
                      package3d_urn="urn:adsk.eagle:package:922/2" technology="LS"/>
                <part name="U11" library="74xx-us" library_urn="urn:adsk.eagle:library:88" deviceset="74*174" device="N"
                      package3d_urn="urn:adsk.eagle:package:922/2" technology="LS"/>
                <part name="U12" library="74xx-us" library_urn="urn:adsk.eagle:library:88" deviceset="74*27" device="N"
                      package3d_urn="urn:adsk.eagle:package:16407/2" technology="ALS"/>
                <part name="U25" library="texas-sn55-sn75" library_urn="urn:adsk.eagle:library:386" deviceset="SN75452B"
                      device="P" package3d_urn="urn:adsk.eagle:package:29519/2"/>
                <part name="U7" library="texas-sn55-sn75" library_urn="urn:adsk.eagle:library:386" deviceset="SN75452B"
                      device="P" package3d_urn="urn:adsk.eagle:package:29519/2"/>
                <part name="R3" library="Resistor" deviceset="R-US" device="AXIAL-7.2MM-PITCH"
                      package3d_urn="urn:adsk.eagle:package:16378561/2" technology="_" value="1K"/>
                <part name="SUPPLY3" library="Tutorial - Fusion 360" deviceset="+V" device=""/>
                <part name="U4" library="texas-sn55-sn75" library_urn="urn:adsk.eagle:library:386" deviceset="SN75452B"
                      device="P" package3d_urn="urn:adsk.eagle:package:29519/2"/>
                <part name="U5" library="texas-sn55-sn75" library_urn="urn:adsk.eagle:library:386" deviceset="SN75452B"
                      device="P" package3d_urn="urn:adsk.eagle:package:29519/2"/>
                <part name="U6" library="texas-sn55-sn75" library_urn="urn:adsk.eagle:library:386" deviceset="SN75452B"
                      device="P" package3d_urn="urn:adsk.eagle:package:29519/2"/>
                <part name="U13" library="74xx-us" library_urn="urn:adsk.eagle:library:88" deviceset="74*174" device="N"
                      package3d_urn="urn:adsk.eagle:package:922/2" technology="LS"/>
                <part name="U14" library="74ttl-din" library_urn="urn:adsk.eagle:library:84" deviceset="74*180"
                      device="N" package3d_urn="urn:adsk.eagle:package:16407/2"/>
            </parts>
            <sheets>
                <sheet>
                    <plain>
                    </plain>
                    <instances>
                        <instance part="U2" gate="1" x="78.74" y="86.36" smashed="yes">
                            <attribute name="NAME" x="76.2" y="91.44" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="71.12" y="55.88" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U3" gate="1" x="81.28" y="10.16" smashed="yes">
                            <attribute name="NAME" x="78.74" y="15.24" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="73.66" y="-20.32" size="1.778" layer="96"/>
                        </instance>
                        <instance part="J1" gate="1" x="10.16" y="81.28" smashed="yes">
                            <attribute name="NAME" x="7.62" y="66.04" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="0" y="93.98" size="1.778" layer="96"/>
                        </instance>
                        <instance part="J2" gate="1" x="7.62" y="17.78" smashed="yes">
                            <attribute name="NAME" x="5.08" y="2.54" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="0" y="30.48" size="1.778" layer="96"/>
                        </instance>
                        <instance part="SUPPLY1" gate="G$1" x="-7.62" y="63.5" smashed="yes">
                            <attribute name="VALUE" x="-7.493" y="60.325" size="1.778" layer="96"
                                       align="bottom-center"/>
                        </instance>
                        <instance part="SUPPLY2" gate="G$1" x="22.86" y="-20.32" smashed="yes">
                            <attribute name="VALUE" x="22.987" y="-23.495" size="1.778" layer="96"
                                       align="bottom-center"/>
                        </instance>
                        <instance part="U18" gate="A" x="231.14" y="91.44" smashed="yes">
                            <attribute name="NAME" x="233.68" y="94.615" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="233.68" y="86.36" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U18" gate="B" x="231.14" y="78.74" smashed="yes">
                            <attribute name="NAME" x="233.68" y="81.915" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="233.68" y="73.66" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U18" gate="C" x="231.14" y="60.96" smashed="yes">
                            <attribute name="NAME" x="233.68" y="64.135" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="233.68" y="55.88" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U18" gate="D" x="7.62" y="45.72" smashed="yes">
                            <attribute name="NAME" x="10.16" y="48.895" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="10.16" y="40.64" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U18" gate="E" x="231.14" y="33.02" smashed="yes">
                            <attribute name="NAME" x="233.68" y="36.195" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="233.68" y="27.94" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U18" gate="F" x="231.14" y="17.78" smashed="yes">
                            <attribute name="NAME" x="233.68" y="20.955" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="233.68" y="12.7" size="1.778" layer="96"/>
                        </instance>
                        <instance part="TP1" gate="1" x="96.52" y="116.84" smashed="yes">
                            <attribute name="NAME" x="95.25" y="122.682" size="1.27" layer="95"/>
                        </instance>
                        <instance part="U17" gate="A" x="231.14" y="149.86" smashed="yes">
                            <attribute name="NAME" x="223.52" y="158.115" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="223.52" y="137.16" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U17" gate="B" x="231.14" y="121.92" smashed="yes">
                            <attribute name="NAME" x="223.52" y="130.175" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="223.52" y="109.22" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U8" gate="A" x="147.32" y="132.08" smashed="yes">
                            <attribute name="NAME" x="139.7" y="137.795" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="124.46" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U8" gate="B" x="147.32" y="109.22" smashed="yes">
                            <attribute name="NAME" x="139.7" y="114.935" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="101.6" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U8" gate="C" x="147.32" y="91.44" smashed="yes">
                            <attribute name="NAME" x="139.7" y="97.155" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="83.82" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U8" gate="D" x="147.32" y="71.12" smashed="yes">
                            <attribute name="NAME" x="139.7" y="76.835" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="63.5" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U9" gate="A" x="147.32" y="53.34" smashed="yes">
                            <attribute name="NAME" x="139.7" y="59.055" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="45.72" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U9" gate="B" x="147.32" y="35.56" smashed="yes">
                            <attribute name="NAME" x="139.7" y="41.275" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="27.94" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U9" gate="C" x="147.32" y="17.78" smashed="yes">
                            <attribute name="NAME" x="139.7" y="23.495" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="10.16" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U9" gate="D" x="147.32" y="0" smashed="yes">
                            <attribute name="NAME" x="139.7" y="5.715" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="-7.62" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U10" gate="A" x="147.32" y="-25.4" smashed="yes">
                            <attribute name="NAME" x="139.7" y="-12.065" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="-40.64" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U11" gate="A" x="147.32" y="-58.42" smashed="yes">
                            <attribute name="NAME" x="139.7" y="-45.085" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="-73.66" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U12" gate="A" x="190.5" y="106.68" smashed="yes">
                            <attribute name="NAME" x="182.88" y="112.395" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="182.88" y="99.06" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U12" gate="B" x="190.5" y="88.9" smashed="yes">
                            <attribute name="NAME" x="182.88" y="94.615" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="182.88" y="81.28" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U12" gate="C" x="190.5" y="68.58" smashed="yes">
                            <attribute name="NAME" x="182.88" y="74.295" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="182.88" y="60.96" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U25" gate="A" x="233.68" y="-2.54" smashed="yes">
                            <attribute name="NAME" x="226.06" y="3.175" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="226.06" y="-10.16" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U25" gate="B" x="233.68" y="-20.32" smashed="yes">
                            <attribute name="NAME" x="226.06" y="-14.605" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="226.06" y="-27.94" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U7" gate="A" x="147.32" y="170.18" smashed="yes">
                            <attribute name="NAME" x="139.7" y="175.895" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="162.56" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U7" gate="B" x="147.32" y="152.4" smashed="yes">
                            <attribute name="NAME" x="139.7" y="158.115" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="144.78" size="1.778" layer="96"/>
                        </instance>
                        <instance part="R3" gate="G$1" x="81.28" y="43.18" smashed="yes">
                            <attribute name="NAME" x="81.28" y="45.9486" size="1.778" layer="95" align="center"/>
                            <attribute name="VALUE" x="81.28" y="39.878" size="1.778" layer="96" align="center"/>
                        </instance>
                        <instance part="SUPPLY3" gate="G$1" x="76.2" y="48.26" smashed="yes">
                            <attribute name="VALUE" x="76.327" y="49.022" size="1.778" layer="96"
                                       align="bottom-center"/>
                        </instance>
                        <instance part="U25" gate="P" x="-35.56" y="40.64" smashed="yes">
                            <attribute name="NAME" x="-36.195" y="40.005" size="1.778" layer="95"/>
                        </instance>
                        <instance part="U7" gate="P" x="-50.8" y="40.64" smashed="yes">
                            <attribute name="NAME" x="-51.435" y="40.005" size="1.778" layer="95"/>
                        </instance>
                        <instance part="U4" gate="A" x="147.32" y="276.86" smashed="yes">
                            <attribute name="NAME" x="139.7" y="282.575" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="269.24" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U4" gate="B" x="147.32" y="259.08" smashed="yes">
                            <attribute name="NAME" x="139.7" y="264.795" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="251.46" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U4" gate="P" x="-50.8" y="22.86" smashed="yes">
                            <attribute name="NAME" x="-51.435" y="19.685" size="1.778" layer="95"/>
                        </instance>
                        <instance part="U5" gate="A" x="147.32" y="241.3" smashed="yes">
                            <attribute name="NAME" x="139.7" y="247.015" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="233.68" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U5" gate="B" x="147.32" y="223.52" smashed="yes">
                            <attribute name="NAME" x="139.7" y="229.235" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="215.9" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U5" gate="P" x="-38.1" y="17.78" smashed="yes">
                            <attribute name="NAME" x="-38.735" y="17.145" size="1.778" layer="95"/>
                        </instance>
                        <instance part="U6" gate="A" x="147.32" y="205.74" smashed="yes">
                            <attribute name="NAME" x="139.7" y="211.455" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="198.12" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U6" gate="B" x="147.32" y="187.96" smashed="yes">
                            <attribute name="NAME" x="139.7" y="193.675" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="139.7" y="180.34" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U6" gate="P" x="-50.8" y="5.08" smashed="yes">
                            <attribute name="NAME" x="-53.975" y="6.985" size="1.778" layer="95"/>
                        </instance>
                        <instance part="U13" gate="A" x="187.96" y="-2.54" smashed="yes">
                            <attribute name="NAME" x="180.34" y="10.795" size="1.778" layer="95"/>
                            <attribute name="VALUE" x="180.34" y="-17.78" size="1.778" layer="96"/>
                        </instance>
                        <instance part="U14" gate="1" x="200.66" y="-55.88" smashed="yes">
                            <attribute name="NAME" x="190.5" y="-27.305" size="2.032" layer="95"/>
                            <attribute name="VALUE" x="190.5" y="-86.995" size="2.032" layer="96"/>
                        </instance>
                    </instances>
                    <busses>
                    </busses>
                    <nets>
                        <net name="N$1" class="0">
                            <segment>
                                <wire x1="27.94" y1="71.12" x2="27.94" y2="30.48" width="0.1524" layer="91"/>
                                <wire x1="27.94" y1="71.12" x2="27.94" y2="106.231765625" width="0.1524" layer="91"/>
                                <wire x1="27.966365625" y1="106.68" x2="63.5" y2="106.68" width="0.1524" layer="91"/>
                                <wire x1="27.966365625" y1="106.68" x2="27.94" y2="106.231765625" width="0.1524"
                                      layer="91"/>
                                <pinref part="J1" gate="1" pin="9"/>
                                <wire x1="22.86" y1="71.12" x2="27.94" y2="71.12" width="0.1524" layer="91"/>
                                <pinref part="U2" gate="1" pin="D0"/>
                                <wire x1="27.94" y1="30.48" x2="66.04" y2="30.48" width="0.1524" layer="91"/>
                                <pinref part="U3" gate="1" pin="D0"/>
                                <junction x="27.94" y="71.12"/>
                            </segment>
                        </net>
                        <net name="N$2" class="0">
                            <segment>
                                <wire x1="30.48" y1="73.66" x2="30.48" y2="27.94" width="0.1524" layer="91"/>
                                <wire x1="30.48" y1="73.66" x2="30.48" y2="103.66375" width="0.1524" layer="91"/>
                                <wire x1="30.509765625" y1="104.14" x2="63.5" y2="104.14" width="0.1524" layer="91"/>
                                <wire x1="30.509765625" y1="104.14" x2="30.48" y2="103.66375" width="0.1524"
                                      layer="91"/>
                                <pinref part="J1" gate="1" pin="10"/>
                                <wire x1="22.86" y1="73.66" x2="30.48" y2="73.66" width="0.1524" layer="91"/>
                                <pinref part="U2" gate="1" pin="D1"/>
                                <wire x1="30.48" y1="27.94" x2="66.04" y2="27.94" width="0.1524" layer="91"/>
                                <pinref part="U3" gate="1" pin="D1"/>
                                <junction x="30.48" y="73.66"/>
                            </segment>
                        </net>
                        <net name="N$3" class="0">
                            <segment>
                                <wire x1="33.053865625" y1="101.6" x2="63.5" y2="101.6" width="0.1524" layer="91"/>
                                <wire x1="33.053865625" y1="101.6" x2="33.02" y2="101.092" width="0.1524" layer="91"/>
                                <wire x1="33.02" y1="101.092" x2="33.02" y2="76.2" width="0.1524" layer="91"/>
                                <wire x1="33.02" y1="76.2" x2="33.02" y2="25.4" width="0.1524" layer="91"/>
                                <pinref part="J1" gate="1" pin="11"/>
                                <wire x1="22.86" y1="76.2" x2="33.02" y2="76.2" width="0.1524" layer="91"/>
                                <pinref part="U2" gate="1" pin="D2"/>
                                <wire x1="33.02" y1="25.4" x2="66.04" y2="25.4" width="0.1524" layer="91"/>
                                <pinref part="U3" gate="1" pin="D2"/>
                                <junction x="33.02" y="76.2"/>
                            </segment>
                        </net>
                        <net name="N$4" class="0">
                            <segment>
                                <wire x1="35.598878125" y1="99.06" x2="63.5" y2="99.06" width="0.1524" layer="91"/>
                                <wire x1="35.598878125" y1="99.06" x2="35.56" y2="98.515715625" width="0.1524"
                                      layer="91"/>
                                <wire x1="35.56" y1="98.515715625" x2="35.56" y2="78.74" width="0.1524" layer="91"/>
                                <wire x1="35.56" y1="78.74" x2="35.56" y2="22.86" width="0.1524" layer="91"/>
                                <pinref part="J1" gate="1" pin="12"/>
                                <wire x1="22.86" y1="78.74" x2="35.56" y2="78.74" width="0.1524" layer="91"/>
                                <pinref part="U2" gate="1" pin="D3"/>
                                <wire x1="35.56" y1="22.86" x2="66.04" y2="22.86" width="0.1524" layer="91"/>
                                <pinref part="U3" gate="1" pin="D3"/>
                                <junction x="35.56" y="78.74"/>
                            </segment>
                        </net>
                        <net name="N$5" class="0">
                            <segment>
                                <wire x1="38.1450875" y1="96.52" x2="63.5" y2="96.52" width="0.1524" layer="91"/>
                                <wire x1="38.1450875" y1="96.52" x2="38.1" y2="95.933846875" width="0.1524" layer="91"/>
                                <wire x1="38.1" y1="95.933846875" x2="38.1" y2="81.28" width="0.1524" layer="91"/>
                                <wire x1="38.1" y1="81.28" x2="38.1" y2="20.32" width="0.1524" layer="91"/>
                                <pinref part="J1" gate="1" pin="13"/>
                                <wire x1="22.86" y1="81.28" x2="38.1" y2="81.28" width="0.1524" layer="91"/>
                                <pinref part="U2" gate="1" pin="D4"/>
                                <wire x1="38.1" y1="20.32" x2="66.04" y2="20.32" width="0.1524" layer="91"/>
                                <pinref part="U3" gate="1" pin="D4"/>
                                <junction x="38.1" y="81.28"/>
                            </segment>
                        </net>
                        <net name="N$6" class="0">
                            <segment>
                                <wire x1="40.692915625" y1="93.98" x2="63.5" y2="93.98" width="0.1524" layer="91"/>
                                <wire x1="40.692915625" y1="93.98" x2="40.64" y2="93.345" width="0.1524" layer="91"/>
                                <wire x1="40.64" y1="93.345" x2="40.64" y2="83.82" width="0.1524" layer="91"/>
                                <wire x1="40.64" y1="83.82" x2="40.64" y2="17.78" width="0.1524" layer="91"/>
                                <pinref part="J1" gate="1" pin="14"/>
                                <wire x1="22.86" y1="83.82" x2="40.64" y2="83.82" width="0.1524" layer="91"/>
                                <pinref part="U2" gate="1" pin="D5"/>
                                <wire x1="40.64" y1="17.78" x2="66.04" y2="17.78" width="0.1524" layer="91"/>
                                <pinref part="U3" gate="1" pin="D5"/>
                                <junction x="40.64" y="83.82"/>
                            </segment>
                        </net>
                        <net name="N$7" class="0">
                            <segment>
                                <wire x1="43.242975" y1="91.44" x2="63.5" y2="91.44" width="0.1524" layer="91"/>
                                <wire x1="43.242975" y1="91.44" x2="43.18" y2="90.747271875" width="0.1524" layer="91"/>
                                <wire x1="43.18" y1="90.747271875" x2="43.18" y2="86.36" width="0.1524" layer="91"/>
                                <wire x1="43.18" y1="86.36" x2="43.18" y2="15.24" width="0.1524" layer="91"/>
                                <pinref part="J1" gate="1" pin="15"/>
                                <wire x1="22.86" y1="86.36" x2="43.18" y2="86.36" width="0.1524" layer="91"/>
                                <pinref part="U2" gate="1" pin="D6"/>
                                <wire x1="43.18" y1="15.24" x2="66.04" y2="15.24" width="0.1524" layer="91"/>
                                <pinref part="U3" gate="1" pin="D6"/>
                                <junction x="43.18" y="86.36"/>
                            </segment>
                        </net>
                        <net name="N$8" class="0">
                            <segment>
                                <wire x1="45.72" y1="88.9" x2="45.72" y2="12.7" width="0.1524" layer="91"/>
                                <pinref part="J1" gate="1" pin="16"/>
                                <wire x1="22.86" y1="88.9" x2="45.72" y2="88.9" width="0.1524" layer="91"/>
                                <wire x1="45.72" y1="88.9" x2="63.5" y2="88.9" width="0.1524" layer="91"/>
                                <pinref part="U2" gate="1" pin="D7"/>
                                <wire x1="45.72" y1="12.7" x2="66.04" y2="12.7" width="0.1524" layer="91"/>
                                <pinref part="U3" gate="1" pin="D7"/>
                                <junction x="45.72" y="88.9"/>
                            </segment>
                        </net>
                        <net name="GND" class="0">
                            <segment>
                                <pinref part="SUPPLY1" gate="G$1" pin="GND"/>
                                <wire x1="-7.62" y1="66.04" x2="-7.62" y2="71.12" width="0.1524" layer="91"/>
                                <wire x1="-7.62" y1="76.2" x2="-7.62" y2="78.74" width="0.1524" layer="91"/>
                                <wire x1="-7.62" y1="71.12" x2="-7.62" y2="73.66" width="0.1524" layer="91"/>
                                <wire x1="-7.62" y1="78.74" x2="-7.62" y2="81.28" width="0.1524" layer="91"/>
                                <wire x1="-7.62" y1="73.66" x2="-7.62" y2="76.2" width="0.1524" layer="91"/>
                                <wire x1="-7.62" y1="81.28" x2="-7.62" y2="83.82" width="0.1524" layer="91"/>
                                <wire x1="-2.54" y1="83.82" x2="-7.62" y2="83.82" width="0.1524" layer="91"/>
                                <wire x1="-2.54" y1="81.28" x2="-7.62" y2="81.28" width="0.1524" layer="91"/>
                                <wire x1="-2.54" y1="76.2" x2="-7.62" y2="76.2" width="0.1524" layer="91"/>
                                <wire x1="-2.54" y1="78.74" x2="-7.62" y2="78.74" width="0.1524" layer="91"/>
                                <wire x1="-2.54" y1="73.66" x2="-7.62" y2="73.66" width="0.1524" layer="91"/>
                                <wire x1="-2.54" y1="71.12" x2="-7.62" y2="71.12" width="0.1524" layer="91"/>
                                <pinref part="J1" gate="1" pin="2"/>
                                <pinref part="J1" gate="1" pin="3"/>
                                <pinref part="J1" gate="1" pin="4"/>
                                <pinref part="J1" gate="1" pin="5"/>
                                <pinref part="J1" gate="1" pin="6"/>
                                <pinref part="J1" gate="1" pin="7"/>
                                <pinref part="J1" gate="1" pin="8"/>
                                <wire x1="-7.62" y1="83.82" x2="-7.62" y2="88.9" width="0.1524" layer="91"/>
                                <wire x1="-7.62" y1="86.36" x2="-2.54" y2="86.36" width="0.1524" layer="91"/>
                                <wire x1="-7.62" y1="88.9" x2="-2.54" y2="88.9" width="0.1524" layer="91"/>
                                <pinref part="J1" gate="1" pin="1"/>
                                <junction x="-7.62" y="71.12"/>
                                <junction x="-7.62" y="76.2"/>
                                <junction x="-7.62" y="78.74"/>
                                <junction x="-7.62" y="73.66"/>
                                <junction x="-7.62" y="81.28"/>
                                <junction x="-7.62" y="83.82"/>
                            </segment>
                            <segment>
                                <pinref part="SUPPLY2" gate="G$1" pin="GND"/>
                                <pinref part="J2" gate="1" pin="15"/>
                                <wire x1="20.32" y1="22.86" x2="22.86" y2="22.86" width="0.1524" layer="91"/>
                                <wire x1="22.86" y1="22.86" x2="22.86" y2="20.32" width="0.1524" layer="91"/>
                                <pinref part="J2" gate="1" pin="14"/>
                                <wire x1="20.32" y1="20.32" x2="22.86" y2="20.32" width="0.1524" layer="91"/>
                                <junction x="22.86" y="20.32"/>
                                <wire x1="22.86" y1="20.32" x2="22.86" y2="17.78" width="0.1524" layer="91"/>
                                <pinref part="J2" gate="1" pin="13"/>
                                <wire x1="20.32" y1="17.78" x2="22.86" y2="17.78" width="0.1524" layer="91"/>
                                <junction x="22.86" y="17.78"/>
                                <wire x1="22.86" y1="17.78" x2="22.86" y2="15.24" width="0.1524" layer="91"/>
                                <pinref part="J2" gate="1" pin="12"/>
                                <wire x1="20.32" y1="15.24" x2="22.86" y2="15.24" width="0.1524" layer="91"/>
                                <junction x="22.86" y="15.24"/>
                                <wire x1="22.86" y1="15.24" x2="22.86" y2="12.7" width="0.1524" layer="91"/>
                                <pinref part="J2" gate="1" pin="11"/>
                                <wire x1="20.32" y1="12.7" x2="22.86" y2="12.7" width="0.1524" layer="91"/>
                                <junction x="22.86" y="12.7"/>
                                <wire x1="22.86" y1="12.7" x2="22.86" y2="10.16" width="0.1524" layer="91"/>
                                <pinref part="J2" gate="1" pin="10"/>
                                <wire x1="20.32" y1="10.16" x2="22.86" y2="10.16" width="0.1524" layer="91"/>
                                <junction x="22.86" y="10.16"/>
                                <wire x1="22.86" y1="10.16" x2="22.86" y2="7.62" width="0.1524" layer="91"/>
                                <pinref part="J2" gate="1" pin="9"/>
                                <wire x1="20.32" y1="7.62" x2="22.86" y2="7.62" width="0.1524" layer="91"/>
                                <junction x="22.86" y="7.62"/>
                                <wire x1="22.86" y1="7.62" x2="22.86" y2="-17.78" width="0.1524" layer="91"/>
                            </segment>
                        </net>
                        <net name="U17" class="0">
                            <segment>
                                <wire x1="-5.08" y1="25.4" x2="-5.08" y2="45.72" width="0.1524" layer="91"/>
                                <wire x1="-5.08" y1="45.72" x2="-5.08" y2="53.34" width="0.1524" layer="91"/>
                                <wire x1="-5.08" y1="53.34" x2="50.8" y2="53.34" width="0.1524" layer="91"/>
                                <wire x1="-5.08" y1="45.72" x2="-2.54" y2="45.72" width="0.1524" layer="91"/>
                                <pinref part="U18" gate="D" pin="I"/>
                                <pinref part="J2" gate="1" pin="1"/>
                                <wire x1="50.8" y1="53.34" x2="50.8" y2="83.82" width="0.1524" layer="91"/>
                                <wire x1="50.8" y1="83.82" x2="63.5" y2="83.82" width="0.1524" layer="91"/>
                                <pinref part="U2" gate="1" pin="CS0"/>
                                <junction x="-5.08" y="45.72"/>
                            </segment>
                        </net>
                        <net name="N$13" class="0">
                            <segment>
                                <pinref part="U17" gate="A" pin="CLR"/>
                                <pinref part="U2" gate="1" pin="CA2"/>
                                <wire x1="93.98" y1="109.22" x2="218.44" y2="142.24" width="0.1524" layer="91"/>
                            </segment>
                        </net>
                        <net name="+V" class="0">
                            <segment>
                                <pinref part="SUPPLY3" gate="G$1" pin="+V"/>
                                <pinref part="R3" gate="G$1" pin="1"/>
                                <wire x1="76.2" y1="45.72" x2="76.2" y2="43.18" width="0.1524" layer="91"/>
                            </segment>
                        </net>
                        <net name="N$9" class="0">
                            <segment>
                                <pinref part="J2" gate="1" pin="16"/>
                                <wire x1="20.32" y1="25.4" x2="22.86" y2="25.4" width="0.1524" layer="91"/>
                                <wire x1="22.86" y1="25.4" x2="22.86" y2="35.56" width="0.1524" layer="91"/>
                                <wire x1="22.86" y1="35.56" x2="66.04" y2="35.56" width="0.1524" layer="91"/>
                                <pinref part="U3" gate="1" pin="!IRQA"/>
                            </segment>
                        </net>
                        <net name="N$10" class="0">
                            <segment>
                                <pinref part="U18" gate="D" pin="O"/>
                                <wire x1="17.78" y1="45.72" x2="50.8" y2="45.72" width="0.1524" layer="91"/>
                                <wire x1="50.8" y1="45.72" x2="50.8" y2="7.62" width="0.1524" layer="91"/>
                                <wire x1="50.8" y1="7.62" x2="66.04" y2="7.62" width="0.1524" layer="91"/>
                                <pinref part="U3" gate="1" pin="CS0"/>
                            </segment>
                        </net>
                        <net name="N$12" class="0">
                            <segment>
                                <pinref part="U3" gate="1" pin="CA1"/>
                                <wire x1="96.52" y1="35.56" x2="96.52" y2="43.18" width="0.1524" layer="91"/>
                                <wire x1="96.52" y1="43.18" x2="86.36" y2="43.18" width="0.1524" layer="91"/>
                                <pinref part="R3" gate="G$1" pin="2"/>
                            </segment>
                        </net>
                        <net name="N$11" class="0">
                            <segment>
                                <pinref part="U2" gate="1" pin="CA1"/>
                                <pinref part="U17" gate="A" pin="A"/>
                                <wire x1="93.98" y1="111.76" x2="218.44" y2="154.94" width="0.1524" layer="91"/>
                                <wire x1="93.98" y1="111.76" x2="96.52" y2="116.84" width="0.1524" layer="91"/>
                                <junction x="93.98" y="111.76"/>
                                <pinref part="TP1" gate="1" pin="TP"/>
                            </segment>
                        </net>
                    </nets>
                </sheet>
            </sheets>
        </schematic>
    </drawing>
    <compatibility>
        <note version="8.2" severity="warning">
            Since Version 8.2, EAGLE supports online libraries. The ids
            of those online libraries will not be understood (or retained)
            with this version.
        </note>
        <note version="8.3" severity="warning">
            Since Version 8.3, EAGLE supports URNs for individual library
            assets (packages, symbols, and devices). The URNs of those assets
            will not be understood (or retained) with this version.
        </note>
        <note version="8.3" severity="warning">
            Since Version 8.3, EAGLE supports the association of 3D packages
            with devices in libraries, schematics, and board files. Those 3D
            packages will not be understood (or retained) with this version.
        </note>
        <note version="8.4" severity="warning">
            Since Version 8.4, EAGLE supports properties for SPICE simulation.
            Probes in schematics and SPICE mapping objects found in parts and library devices
            will not be understood with this version. Update EAGLE to the latest version
            for full support of SPICE simulation.
        </note>
    </compatibility>
</eagle>
