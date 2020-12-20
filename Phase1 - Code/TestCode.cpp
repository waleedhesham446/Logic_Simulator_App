#include "GUI\Input.h"
#include "GUI\Output.h"

//This is a test code to test the Input and Output classes

int main()
{
	int x,y;

	//Create Input and Output objects to test
	Output *pOut = new Output();;
	Input *pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMsg("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:	Create The FULL Tool bar, the drawing area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMsg("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	Drawing all the Components with all possible states: Normal, highlighted
	//			
	///////////////////////////////////////////////////////////////////////////////////
	
	pOut->PrintMsg("TEST2: Now we will show that Output class can draw any Component in any state, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	GraphicsInfo GfxInfo;  //to be used with draw function of the class Ouput

	/// 2.1- AND2 Gate test
	pOut->PrintMsg("Drawing 2-input AND gate, Normal and Highlighted,  Click to continue");
	
	//Drawing Normal AND2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 100;
	pOut->DrawAND2(GfxInfo);

	//Drawing Highlighted AND2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 200;
	pOut->DrawAND2(GfxInfo, true);

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	/// 2.2- NAND2 Gate test
	pOut->PrintMsg("Drawing 2-input NAND gate, Normal and Highlighted,  Click to continue");

	///TODO: Add code to draw 2-input NAND gate, Normal and Highlighted		====================>>>>>>>>>>>		DONE

	//Drawing Normal NAND2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 100;
	pOut->DrawNAND2(GfxInfo);

	//Drawing Highlighted NAND2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 200;
	pOut->DrawNAND2(GfxInfo, true);

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	/// 2.3- OR2 and NOR2 Gates test
	pOut->PrintMsg("Drawing 2-input OR and NOR gates, Normal and Highlighted,  Click to continue");
	
	///TODO: Add code to draw 2-input OR and NOR gates, Normal and Highlighted for each		====================>>>>>>>>>>>		DONE
	
	//Drawing Normal OR2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 100;
	pOut->DrawOR2(GfxInfo);

	//Drawing Highlighted OR2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 200;
	pOut->DrawOR2(GfxInfo, true);

	//Drawing Normal NOR2 gate
	GfxInfo.x1 = 300;	GfxInfo.y1 = 100;
	pOut->DrawNOR2(GfxInfo);

	//Drawing Highlighted NOR2 gate
	GfxInfo.x1 = 300;	GfxInfo.y1 = 200;
	pOut->DrawNOR2(GfxInfo, true);

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	/// 2.4- XOR2 and XNOR2 Gates test
	pOut->PrintMsg("Drawing 2-input XOR and XNOR gates, Normal and Highlighted,  Click to continue");
	
	///TODO: Add code to draw 2-input XOR and XNOR gates, Normal and Highlighted for each		====================>>>>>>>>>>>		DONE

	//Drawing Normal XOR2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 100;
	pOut->DrawXOR2(GfxInfo);

	//Drawing Highlighted XOR2 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 200;
	pOut->DrawXOR2(GfxInfo, true);

	//Drawing Normal XNOR2 gate
	GfxInfo.x1 = 300;	GfxInfo.y1 = 100;
	pOut->DrawXNOR2(GfxInfo);

	//Drawing Highlighted XNOR2 gate
	GfxInfo.x1 = 300;	GfxInfo.y1 = 200;
	pOut->DrawXNOR2(GfxInfo, true);

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	/// 2.5- Buffer and Inverter Gates test
	pOut->PrintMsg("Drawing Buffer and Inverter Gates, Normal and Highlighted,  Click to continue");
	
	///TODO: Add code to draw Buffer and Inverter Gates, Normal and Highlighted for each		====================>>>>>>>>>>>		DONE

	//Drawing Normal BUFFER gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 100;
	pOut->DrawBUFFER(GfxInfo);

	//Drawing Highlighted BUFFER gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 200;
	pOut->DrawBUFFER(GfxInfo, true);

	//Drawing Normal NOT gate
	GfxInfo.x1 = 300;	GfxInfo.y1 = 100;
	pOut->DrawNOT(GfxInfo);

	//Drawing Highlighted NOT gate
	GfxInfo.x1 = 300;	GfxInfo.y1 = 200;
	pOut->DrawNOT(GfxInfo, true);

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();


	/// 2.6- AND3, NOR3, and XOR3 Gates test
	pOut->PrintMsg("Drawing 3-input AND, NOR, XOR Gates, Normal and Highlighted,  Click to continue");
	
	///TODO: Add code to draw 3-input AND, NOR, and XOR Gates, Normal and Highlighted for each		====================>>>>>>>>>>>		DONE

	//Drawing Normal AND3 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 100;
	pOut->DrawAND3(GfxInfo);

	//Drawing Highlighted AND3 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 200;
	pOut->DrawAND3(GfxInfo, true);

	//Drawing Normal NOR3 gate
	GfxInfo.x1 = 300;	GfxInfo.y1 = 100;
	pOut->DrawNOR3(GfxInfo);

	//Drawing Highlighted NOR3 gate
	GfxInfo.x1 = 300;	GfxInfo.y1 = 200;
	pOut->DrawNOR3(GfxInfo, true);

	//Drawing Normal XOR3 gate
	GfxInfo.x1 = 500;	GfxInfo.y1 = 100;
	pOut->DrawXOR3(GfxInfo);

	//Drawing Highlighted XOR3 gate
	GfxInfo.x1 = 500;	GfxInfo.y1 = 200;
	pOut->DrawXOR3(GfxInfo, true);

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	/// 2.7- Switch and LED test
	pOut->PrintMsg("Drawing Switch and LED, Normal and Highlighted,  Click to continue");
	
	///TODO: Add code to draw Switch and LED, Normal and Highlighted for each		====================>>>>>>>>>>>		DONE

	//Drawing Normal SWITCH
	GfxInfo.x1 = 100;	GfxInfo.y1 = 100;
	pOut->DrawSWITCH(GfxInfo);

	//Drawing Highlighted AND3 gate
	GfxInfo.x1 = 100;	GfxInfo.y1 = 200;
	pOut->DrawSWITCH(GfxInfo, true);

	//Drawing Normal LED
	GfxInfo.x1 = 300;	GfxInfo.y1 = 100;
	pOut->DrawLED(GfxInfo);

	//Drawing Highlighted LED
	GfxInfo.x1 = 300;	GfxInfo.y1 = 200;
	pOut->DrawLED(GfxInfo, true);

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();


	/// 2.8- Connections
	pOut->PrintMsg("Drawing connections, Normal, Highlighted, straight, and broken,  Click to continue");
	
	///TODO: Add code to draw connections, Normal, Highlighted, straight, and broken (all combinations)		====================>>>>>>>>>>>		DONE
	
	//	Normal Straight
	GfxInfo.x1 = 50;	GfxInfo.y1 = 300;	GfxInfo.x2 = 200;	GfxInfo.y2 = 300;
	pOut->DrawConnection(GfxInfo, false);
	
	//	Highlighted Straight
	GfxInfo.x1 = 250;	GfxInfo.y1 = 300;	GfxInfo.x2 = 400;	GfxInfo.y2 = 300;
	pOut->DrawConnection(GfxInfo, true);

	//	Highlighted Broken
	GfxInfo.x1 = 450;	GfxInfo.y1 = 300;	GfxInfo.x2 = 600;	GfxInfo.y2 = 300;
	pOut->DrawConnection(GfxInfo, true);
	GfxInfo.x1 = 450;	GfxInfo.y1 = 300;	GfxInfo.x2 = 450;	GfxInfo.y2 = 450;
	pOut->DrawConnection(GfxInfo, true);

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: Read strings from the user
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMsg("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	
	pOut->PrintMsg("Testing Input ability to read strings");

	///TODO: Add code here to 
	// 1- Read a string from the user on the status bar and print it inside the drawing area		======================>>>>>>>>>>>		DONE
	
	string str;
	str = pIn->GetSrting(pOut); //Get user input

	pOut->PrintMsg("Click the place you want to place your label...");

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();

	GfxInfo.x1 = x;		GfxInfo.y1 = y;
	pOut->PrintLabel(GfxInfo, str);

	pOut->PrintMsg("Click anywhere to move to TEST4...");

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawingArea();


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4: Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMsg("TEST4: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;
	
	///TODO:  You must add a case for each action		=====================================>>>>>>>>>>>>>>>>>>>>>>>>>>		DONE
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case ADD_Buff:
				pOut->PrintMsg("Action: add a buffer gate , Click anywhere");
				break;

		case ADD_INV:
				pOut->PrintMsg("Action: add an inverter gate , Click anywhere");
				break;

		case ADD_AND_GATE_2:
				pOut->PrintMsg("Action: add 2-input AND gate , Click anywhere");
				break;

		case ADD_NAND_GATE_2:
				pOut->PrintMsg("Action: add 2-input NAND gate , Click anywhere");
				break;

		case ADD_OR_GATE_2:
				pOut->PrintMsg("Action: add 2-input OR gate , Click anywhere");
				break;

		case ADD_NOR_GATE_2:
				pOut->PrintMsg("Action: add 2-input NOR gate , Click anywhere");
				break;
		case NEXT:
			UI.gatesGroup++;
			pOut->PrintMsg("Action: NEXT , Click anywhere");
			pOut->CreateDesignToolBar();
			break;
		case PREVIOUS:
			if(UI.gatesGroup != 1)
				UI.gatesGroup--;
			pOut->PrintMsg("Action: PREVIOUS , Click anywhere");
			pOut->CreateDesignToolBar();
			break;

		case ADD_XOR_GATE_2:
				pOut->PrintMsg("Action: add 2-input XOR gate , Click anywhere");
				break;

		case ADD_XNOR_GATE_2:
				pOut->PrintMsg("Action: add 2-input XNOR gate , Click anywhere");
				break;

		case ADD_AND_GATE_3:
				pOut->PrintMsg("Action: add 3-input AND gate , Click anywhere");
				break;

		case ADD_NOR_GATE_3:
				pOut->PrintMsg("Action: add 3-input NOR gate , Click anywhere");
				break;
		
		case ADD_XOR_GATE_3:
				pOut->PrintMsg("Action: add 3-input XOR gate , Click anywhere");
				break;
		
		case ADD_Switch:
				pOut->PrintMsg("Action: add SWITCH , Click anywhere");
				break;

		case ADD_LED:
				pOut->PrintMsg("Action: add LED , Click anywhere");
				break;
		
		case ADD_CONNECTION:
				pOut->PrintMsg("Action: add CONNECTION , Click anywhere");
				break;
		
		case ADD_Label:
				pOut->PrintMsg("Action: add LABEL , Click anywhere");
				break;
		
		case EDIT_Label:
				pOut->PrintMsg("Action: edit LABEL , Click anywhere");
				break;
		
		case Create_TruthTable:
				pOut->PrintMsg("Action: create TRUTHTABLE , Click anywhere");
				break;
		
		case Change_Switch:
				pOut->PrintMsg("Action: change SWITCH , Click anywhere");
				break;
		
		case SELECT:
				pOut->PrintMsg("Action: a click on the Drawing area, Click anywhere");
				break;
			
		case DEL:
				pOut->PrintMsg("Action: delete an item from the Drawing area , Click anywhere");
				break;
		
		case MOVE:
				pOut->PrintMsg("Action: move an item in the Drawing area , Click anywhere");
				break;
		
		case SAVE:
				pOut->PrintMsg("Action: save the whole Circuit to a file , Click anywhere");
				break;
		
		case LOAD:
				pOut->PrintMsg("Action: load a Circuit from a file , Click anywhere");
				break;
		
		case UNDO:
				pOut->PrintMsg("Action: undo the last Action preformed , Click anywhere");
				break;
		
		case REDO:
				pOut->PrintMsg("Action: redo the last Action canceled , Click anywhere");
				break;
		
		case STATUS_BAR:
				pOut->PrintMsg("Action: a click on the Status Bar, Click anywhere");
				break;
 
		case DSN_TOOL:
				pOut->PrintMsg("Action: a click on empty area in the Design Tool Bar, Click anywhere");
				break;

		case SIM_MODE:
				pOut->PrintMsg("Action: Switch to Simulation Mode, creating simualtion tool bar");
				pOut->CreateSimulationToolBar();
				break;

		case DSN_MODE:
				pOut->PrintMsg("Action: Switch to Design Mode, creating Design tool bar");
				pOut->CreateDesignToolBar();
				break;


		case EXIT:				
				break;
		}
	}while(ActType != EXIT);

	/// Exiting
	pOut->PrintMsg("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x,y);

	
	delete pIn;
	delete pOut;	
	return 0;
}


