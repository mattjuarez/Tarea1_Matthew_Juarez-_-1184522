#pragma once
using namespace std;

namespace Tarea1MatthewJuarez1184522 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ejercicio2
	/// </summary>
	public ref class Ejercicio2 : public System::Windows::Forms::Form
	{
	public:
		Ejercicio2(void)
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
		~Ejercicio2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnBuscar;
	protected:

	private: System::Windows::Forms::TextBox^ TxtPalabras;
	private: System::Windows::Forms::Label^ LblResultado;
	protected:


	private: System::Windows::Forms::Label^ LblIngreso;

	private: System::Windows::Forms::Label^ LblComprobacion;


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
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->TxtPalabras = (gcnew System::Windows::Forms::TextBox());
			this->LblResultado = (gcnew System::Windows::Forms::Label());
			this->LblIngreso = (gcnew System::Windows::Forms::Label());
			this->LblComprobacion = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Location = System::Drawing::Point(273, 321);
			this->BtnBuscar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(112, 35);
			this->BtnBuscar->TabIndex = 8;
			this->BtnBuscar->Text = L"Buscar";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &Ejercicio2::BtnBuscar_Click);
			// 
			// TxtPalabras
			// 
			this->TxtPalabras->Location = System::Drawing::Point(185, 118);
			this->TxtPalabras->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->TxtPalabras->Multiline = true;
			this->TxtPalabras->Name = L"TxtPalabras";
			this->TxtPalabras->Size = System::Drawing::Size(274, 172);
			this->TxtPalabras->TabIndex = 7;
			// 
			// LblResultado
			// 
			this->LblResultado->AutoSize = true;
			this->LblResultado->Location = System::Drawing::Point(83, 379);
			this->LblResultado->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblResultado->Name = L"LblResultado";
			this->LblResultado->Size = System::Drawing::Size(82, 20);
			this->LblResultado->TabIndex = 5;
			this->LblResultado->Text = L"Resultado";
			// 
			// LblIngreso
			// 
			this->LblIngreso->AutoSize = true;
			this->LblIngreso->Location = System::Drawing::Point(13, 121);
			this->LblIngreso->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblIngreso->Name = L"LblIngreso";
			this->LblIngreso->Size = System::Drawing::Size(152, 20);
			this->LblIngreso->TabIndex = 6;
			this->LblIngreso->Text = L"Ingrese las palabras";
			// 
			// LblComprobacion
			// 
			this->LblComprobacion->AutoSize = true;
			this->LblComprobacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblComprobacion->Location = System::Drawing::Point(51, 47);
			this->LblComprobacion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblComprobacion->Name = L"LblComprobacion";
			this->LblComprobacion->Size = System::Drawing::Size(329, 29);
			this->LblComprobacion->TabIndex = 4;
			this->LblComprobacion->Text = L"Comprobación de palabras";
			// 
			// Ejercicio2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 472);
			this->Controls->Add(this->BtnBuscar);
			this->Controls->Add(this->TxtPalabras);
			this->Controls->Add(this->LblResultado);
			this->Controls->Add(this->LblIngreso);
			this->Controls->Add(this->LblComprobacion);
			this->Name = L"Ejercicio2";
			this->Text = L"Ejercicio2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ texto = TxtPalabras->Text;
		int aux = 0, igual = 0;
		for (int i = 5; i >= 0; i--) {
			if (texto[i] == texto[aux]) {
				igual++;
			}
			aux++;
		}
		if (5 == igual) {
			LblResultado->Text = "La palabra es palindroma";
		}
		else {
			LblResultado->Text = "La palabra no es palindroma";;
		}
	}
	};
};