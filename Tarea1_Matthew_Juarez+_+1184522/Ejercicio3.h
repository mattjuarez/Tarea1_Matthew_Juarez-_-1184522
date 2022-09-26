#pragma once

namespace Tarea1MatthewJuarez1184522 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ejercicio3
	/// </summary>
	public ref class Ejercicio3 : public System::Windows::Forms::Form
	{
	public:
		Ejercicio3(void)
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
		~Ejercicio3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LblResultado;
	protected:

	private: System::Windows::Forms::Button^ BtnConvertir;
	protected:

	private: System::Windows::Forms::TextBox^ TxtValor;

	private: System::Windows::Forms::Label^ LblValor;
	private: System::Windows::Forms::ComboBox^ CmbBaseDestino;


	private: System::Windows::Forms::ComboBox^ CmbBaseOrigen;

	private: System::Windows::Forms::Label^ LblBaseDestino;

	private: System::Windows::Forms::Label^ LblConversiones;
	private: System::Windows::Forms::Label^ LblBaseOrigen;



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
			this->LblResultado = (gcnew System::Windows::Forms::Label());
			this->BtnConvertir = (gcnew System::Windows::Forms::Button());
			this->TxtValor = (gcnew System::Windows::Forms::TextBox());
			this->LblValor = (gcnew System::Windows::Forms::Label());
			this->CmbBaseDestino = (gcnew System::Windows::Forms::ComboBox());
			this->CmbBaseOrigen = (gcnew System::Windows::Forms::ComboBox());
			this->LblBaseDestino = (gcnew System::Windows::Forms::Label());
			this->LblConversiones = (gcnew System::Windows::Forms::Label());
			this->LblBaseOrigen = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LblResultado
			// 
			this->LblResultado->AutoSize = true;
			this->LblResultado->Location = System::Drawing::Point(59, 381);
			this->LblResultado->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblResultado->Name = L"LblResultado";
			this->LblResultado->Size = System::Drawing::Size(82, 20);
			this->LblResultado->TabIndex = 15;
			this->LblResultado->Text = L"Resultado";
			// 
			// BtnConvertir
			// 
			this->BtnConvertir->Location = System::Drawing::Point(207, 294);
			this->BtnConvertir->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BtnConvertir->Name = L"BtnConvertir";
			this->BtnConvertir->Size = System::Drawing::Size(138, 45);
			this->BtnConvertir->TabIndex = 14;
			this->BtnConvertir->Text = L"Convertir";
			this->BtnConvertir->UseVisualStyleBackColor = true;
			this->BtnConvertir->Click += gcnew System::EventHandler(this, &Ejercicio3::BtnConvertir_Click);
			// 
			// TxtValor
			// 
			this->TxtValor->Location = System::Drawing::Point(293, 236);
			this->TxtValor->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TxtValor->Name = L"TxtValor";
			this->TxtValor->Size = System::Drawing::Size(180, 26);
			this->TxtValor->TabIndex = 13;
			// 
			// LblValor
			// 
			this->LblValor->AutoSize = true;
			this->LblValor->Location = System::Drawing::Point(59, 241);
			this->LblValor->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblValor->Name = L"LblValor";
			this->LblValor->Size = System::Drawing::Size(193, 20);
			this->LblValor->TabIndex = 12;
			this->LblValor->Text = L"Ingrese el valor a convertir";
			// 
			// CmbBaseDestino
			// 
			this->CmbBaseDestino->FormattingEnabled = true;
			this->CmbBaseDestino->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Binario", L"Decimal", L"Hexadecimal" });
			this->CmbBaseDestino->Location = System::Drawing::Point(293, 171);
			this->CmbBaseDestino->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CmbBaseDestino->Name = L"CmbBaseDestino";
			this->CmbBaseDestino->Size = System::Drawing::Size(180, 28);
			this->CmbBaseDestino->TabIndex = 10;
			// 
			// CmbBaseOrigen
			// 
			this->CmbBaseOrigen->FormattingEnabled = true;
			this->CmbBaseOrigen->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Binario", L"Decimal" });
			this->CmbBaseOrigen->Location = System::Drawing::Point(293, 110);
			this->CmbBaseOrigen->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CmbBaseOrigen->Name = L"CmbBaseOrigen";
			this->CmbBaseOrigen->Size = System::Drawing::Size(180, 28);
			this->CmbBaseOrigen->TabIndex = 11;
			// 
			// LblBaseDestino
			// 
			this->LblBaseDestino->AutoSize = true;
			this->LblBaseDestino->Location = System::Drawing::Point(59, 176);
			this->LblBaseDestino->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblBaseDestino->Name = L"LblBaseDestino";
			this->LblBaseDestino->Size = System::Drawing::Size(174, 20);
			this->LblBaseDestino->TabIndex = 7;
			this->LblBaseDestino->Text = L"Ingrese la base destino";
			// 
			// LblConversiones
			// 
			this->LblConversiones->AutoSize = true;
			this->LblConversiones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblConversiones->Location = System::Drawing::Point(201, 47);
			this->LblConversiones->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblConversiones->Name = L"LblConversiones";
			this->LblConversiones->Size = System::Drawing::Size(173, 29);
			this->LblConversiones->TabIndex = 9;
			this->LblConversiones->Text = L"Conversiones";
			// 
			// LblBaseOrigen
			// 
			this->LblBaseOrigen->AutoSize = true;
			this->LblBaseOrigen->Location = System::Drawing::Point(59, 114);
			this->LblBaseOrigen->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblBaseOrigen->Name = L"LblBaseOrigen";
			this->LblBaseOrigen->Size = System::Drawing::Size(166, 20);
			this->LblBaseOrigen->TabIndex = 8;
			this->LblBaseOrigen->Text = L"Ingrese la base origen";
			// 
			// Ejercicio3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 490);
			this->Controls->Add(this->LblResultado);
			this->Controls->Add(this->BtnConvertir);
			this->Controls->Add(this->TxtValor);
			this->Controls->Add(this->LblValor);
			this->Controls->Add(this->CmbBaseDestino);
			this->Controls->Add(this->CmbBaseOrigen);
			this->Controls->Add(this->LblBaseDestino);
			this->Controls->Add(this->LblConversiones);
			this->Controls->Add(this->LblBaseOrigen);
			this->Name = L"Ejercicio3";
			this->Text = L"Ejercicio3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnConvertir_Click(System::Object^ sender, System::EventArgs^ e) {

		int num = Convert::ToInt16(TxtValor->Text);
		if (CmbBaseOrigen->Text == "Decimal" && CmbBaseDestino->Text == "Binario") {
			DecimalaBinario(num);
		}
		else if (CmbBaseOrigen->Text == "Decimal" && CmbBaseDestino->Text == "Decimal") {
			LblResultado->Text = "Resultado: " + num;
		}
		else if (CmbBaseOrigen->Text == "Decimal" && CmbBaseDestino->Text == "Hexadecimal") {
			DecimalaHexa(num);
		}
		else if (CmbBaseOrigen->Text == "Binario" && CmbBaseDestino->Text == "Decimal") {
			BinarioaDecimal(num);
		}
		else if (CmbBaseOrigen->Text == "Binario" && CmbBaseDestino->Text == "Hexadecimal") {
			BinarioaHexa(num);
		}
		else if (CmbBaseOrigen->Text == "Binario" && CmbBaseDestino->Text == "Binario") {
			LblResultado->Text = "Resultado: " + num;
		}
	}
		   void BinarioaHexa(int num) {
			   int resultado, resto = 0;
			   int digito[8];
			   for (int i = 0; i < 8; i++) {
				   digito[i] = num % 10;
				   num /= 10;
			   }
			   for (int i = 7; i >= 0; i--) {
				   resultado = (resto * 2) + digito[i];
				   resto = resultado;
			   }

			   if (resultado < 16) {
				   switch (resultado) {
				   case 10:
					   LblResultado->Text = "a";
					   break;
				   case 11:
					   LblResultado->Text = "b";
					   break;
				   case 12:
					   LblResultado->Text = "c";
					   break;
				   case 13:
					   LblResultado->Text = "d";
					   break;
				   case 14:
					   LblResultado->Text = "e";
					   break;
				   case 15:
					   LblResultado->Text = "f";
					   break;
				   default:
					   LblResultado->Text = "" + resultado;
					   break;
				   }
			   }
			   else {
				   DecimalaHexa(resultado / 16);
				   DecimalaHexa(resultado % 16);
			   }

		   }

		   void BinarioaDecimal(int num) {
			   int resultado, resto = 0;
			   int digito[8];
			   for (int i = 0; i < 8; i++) {
				   digito[i] = num % 10;
				   num /= 10;
			   }
			   for (int i = 7; i >= 0; i--) {
				   resultado = (resto * 2) + digito[i];
				   resto = resultado;
			   }
			   LblResultado->Text = "El resultado es: " + resultado;
		   }
		   void DecimalaBinario(int num) {
			   if (num > 1) {
				   DecimalaBinario(num / 2);
			   }
			   else {
				   LblResultado->Text = "Resultado: " + num % 2;
			   }
		   }
		   void DecimalaHexa(int n) {
			   if (n < 16) {
				   switch (n) {
				   case 10:
					   LblResultado->Text = "a";
					   break;
				   case 11:
					   LblResultado->Text = "b";
					   break;
				   case 12:
					   LblResultado->Text = "c";
					   break;
				   case 13:
					   LblResultado->Text = "d";
					   break;
				   case 14:
					   LblResultado->Text = "e";
					   break;
				   case 15:
					   LblResultado->Text = "f";
					   break;
				   default:
					   LblResultado->Text = "" + n;
					   break;
				   }
			   }
			   else {
				   DecimalaHexa(n / 16);
				   DecimalaHexa(n % 16);
			   }

		   }
	};
};