#pragma once

namespace Tarea1MatthewJuarez1184522 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ejercicio1
	/// </summary>
	public ref class Ejercicio1 : public System::Windows::Forms::Form
	{
	public:
		Ejercicio1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Ejercicio1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnOperar;
	protected:
	private: System::Windows::Forms::Label^ LblResultado;
	private: System::Windows::Forms::TextBox^ TxtIngresoNum1;
	private: System::Windows::Forms::TextBox^ TxtIngresoNum;
	private: System::Windows::Forms::Label^ LblMultiplicacion;
	private: System::Windows::Forms::Label^ LblIngresoNum1;
	private: System::Windows::Forms::Label^ LblIngresoNum;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BtnOperar = (gcnew System::Windows::Forms::Button());
			this->LblResultado = (gcnew System::Windows::Forms::Label());
			this->TxtIngresoNum1 = (gcnew System::Windows::Forms::TextBox());
			this->TxtIngresoNum = (gcnew System::Windows::Forms::TextBox());
			this->LblMultiplicacion = (gcnew System::Windows::Forms::Label());
			this->LblIngresoNum1 = (gcnew System::Windows::Forms::Label());
			this->LblIngresoNum = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BtnOperar
			// 
			this->BtnOperar->Location = System::Drawing::Point(119, 243);
			this->BtnOperar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BtnOperar->Name = L"BtnOperar";
			this->BtnOperar->Size = System::Drawing::Size(150, 35);
			this->BtnOperar->TabIndex = 10;
			this->BtnOperar->Text = L"Operar";
			this->BtnOperar->UseVisualStyleBackColor = true;
			this->BtnOperar->Click += gcnew System::EventHandler(this, &Ejercicio1::BtnOperar_Click);
			// 
			// LblResultado
			// 
			this->LblResultado->AutoSize = true;
			this->LblResultado->Location = System::Drawing::Point(45, 305);
			this->LblResultado->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblResultado->Name = L"LblResultado";
			this->LblResultado->Size = System::Drawing::Size(82, 20);
			this->LblResultado->TabIndex = 9;
			this->LblResultado->Text = L"Resultado";
			// 
			// TxtIngresoNum1
			// 
			this->TxtIngresoNum1->Location = System::Drawing::Point(201, 183);
			this->TxtIngresoNum1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TxtIngresoNum1->Name = L"TxtIngresoNum1";
			this->TxtIngresoNum1->Size = System::Drawing::Size(148, 26);
			this->TxtIngresoNum1->TabIndex = 7;
			// 
			// TxtIngresoNum
			// 
			this->TxtIngresoNum->Location = System::Drawing::Point(201, 111);
			this->TxtIngresoNum->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TxtIngresoNum->Name = L"TxtIngresoNum";
			this->TxtIngresoNum->Size = System::Drawing::Size(148, 26);
			this->TxtIngresoNum->TabIndex = 8;
			// 
			// LblMultiplicacion
			// 
			this->LblMultiplicacion->AutoSize = true;
			this->LblMultiplicacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblMultiplicacion->Location = System::Drawing::Point(115, 45);
			this->LblMultiplicacion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblMultiplicacion->Name = L"LblMultiplicacion";
			this->LblMultiplicacion->Size = System::Drawing::Size(143, 25);
			this->LblMultiplicacion->TabIndex = 4;
			this->LblMultiplicacion->Text = L"Multiplicación";
			// 
			// LblIngresoNum1
			// 
			this->LblIngresoNum1->AutoSize = true;
			this->LblIngresoNum1->Location = System::Drawing::Point(45, 188);
			this->LblIngresoNum1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblIngresoNum1->Name = L"LblIngresoNum1";
			this->LblIngresoNum1->Size = System::Drawing::Size(147, 20);
			this->LblIngresoNum1->TabIndex = 5;
			this->LblIngresoNum1->Text = L"Ingrese un numero:";
			// 
			// LblIngresoNum
			// 
			this->LblIngresoNum->AutoSize = true;
			this->LblIngresoNum->Location = System::Drawing::Point(45, 116);
			this->LblIngresoNum->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblIngresoNum->Name = L"LblIngresoNum";
			this->LblIngresoNum->Size = System::Drawing::Size(147, 20);
			this->LblIngresoNum->TabIndex = 6;
			this->LblIngresoNum->Text = L"Ingrese un numero:";
			this->LblIngresoNum->Click += gcnew System::EventHandler(this, &Ejercicio1::LblIngresoNum_Click);
			// 
			// Ejercicio1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 377);
			this->Controls->Add(this->BtnOperar);
			this->Controls->Add(this->LblResultado);
			this->Controls->Add(this->TxtIngresoNum1);
			this->Controls->Add(this->TxtIngresoNum);
			this->Controls->Add(this->LblMultiplicacion);
			this->Controls->Add(this->LblIngresoNum1);
			this->Controls->Add(this->LblIngresoNum);
			this->Name = L"Ejercicio1";
			this->Text = L"Ejercicio1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LblIngresoNum_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	private: System::Void BtnOperar_Click(System::Object^ sender, System::EventArgs^ e) {
		double num1 = Convert::ToDouble(TxtIngresoNum->Text);
		double num2 = Convert::ToDouble(TxtIngresoNum1->Text);
		LblResultado->Text = "Resultado: " + Multiplicacion(num1, num2);
	}
		   double Multiplicacion(double num1, double num2) {
			   if (num1 == 0 || num2 == 0) {
				   return 0;
			   }
			   else {
				   return num1 + Multiplicacion(num1, num2 - 1);
			   }
		   }
	
	};
};