#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.ExprFuncs.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.StorageBin.hpp>
#include <FireDAC.Stan.StorageJSON.hpp>
#include <FireDAC.Stan.StorageXML.hpp>
#include <FireDAC.Stan.Storage.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.SQLite.hpp>
#include <FireDAC.Phys.SQLiteDef.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <FireDAC.Comp.UI.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>

#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;

__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    // Crear una conexión
    TFDConnection *Connection1 = new TFDConnection(this);
    Connection1->DriverName = "SQLite";
    Connection1->Params->Values["Database"] = "test.db"; // Nombre de tu base de datos SQLite
    Connection1->Connected = true;

    // Crear un objeto de consulta
    TFDQuery *Query1 = new TFDQuery(this);
    Query1->Connection = Connection1;
    Query1->SQL->Text = "SELECT * FROM MiTabla"; // Consulta SQL a ejecutar

    // Ejecutar la consulta
    try
    {
        Query1->Open();
        while (!Query1->Eof)
        {
            Memo1->Lines->Add(Query1->FieldByName("Campo1")->AsString); // Campo1 es el nombre de una columna en tu tabla
            Query1->Next();
        }
    }
    catch (Exception &ex)
    {
        ShowMessage("Error: " + ex.Message);
    }

    // Liberar recursos
    delete Query1;
    delete Connection1;
}
