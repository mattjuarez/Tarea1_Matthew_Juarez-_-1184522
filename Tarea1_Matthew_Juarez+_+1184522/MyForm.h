#pragma once
#include "Ejercicio1.h"
#include "Ejercicio2.h"
#include "Ejercicio3.h"

namespace Tarea1MatthewJuarez1184522 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnEjercicio3;
	protected:
	private: System::Windows::Forms::Button^ BtnEjercicio2;
	private: System::Windows::Forms::Button^ BtnEjercicio1;
	private: System::Windows::Forms::Label^ LblInicio;

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
			this->BtnEjercicio3 = (gcnew System::Windows::Forms::Button());
			this->BtnEjercicio2 = (gcnew System::Windows::Forms::Button());
			this->BtnEjercicio1 = (gcnew System::Windows::Forms::Button());
			this->LblInicio = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// BtnEjercicio3
			// 
			this->BtnEjercicio3->Location = System::Drawing::Point(76, 281);
			this->BtnEjercicio3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BtnEjercicio3->Name = L"BtnEjercicio3";
			this->BtnEjercicio3->Size = System::Drawing::Size(152, 46);
			this->BtnEjercicio3->TabIndex = 3;
			this->BtnEjercicio3->Text = L"EJERCICIO 3";
			this->BtnEjercicio3->UseVisualStyleBackColor = true;
			this->BtnEjercicio3->Click += gcnew System::EventHandler(this, &MyForm::BtnEjercicio3_Click);
			// 
			// BtnEjercicio2
			// 
			this->BtnEjercicio2->Location = System::Drawing::Point(76, 196);
			this->BtnEjercicio2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BtnEjercicio2->Name = L"BtnEjercicio2";
			this->BtnEjercicio2->Size = System::Drawing::Size(152, 46);
			this->BtnEjercicio2->TabIndex = 4;
			this->BtnEjercicio2->Text = L"EJERCICIO 2";
			this->BtnEjercicio2->UseVisualStyleBackColor = true;
			this->BtnEjercicio2->Click += gcnew System::EventHandler(this, &MyForm::BtnEjercicio2_Click);
			// 
			// BtnEjercicio1
			// 
			this->BtnEjercicio1->Location = System::Drawing::Point(76, 115);
			this->BtnEjercicio1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->BtnEjercicio1->Name = L"BtnEjercicio1";
			this->BtnEjercicio1->Size = System::Drawing::Size(152, 46);
			this->BtnEjercicio1->TabIndex = 5;
			this->BtnEjercicio1->Text = L"EJERCICIO 1";
			this->BtnEjercicio1->UseVisualStyleBackColor = true;
			this->BtnEjercicio1->Click += gcnew System::EventHandler(this, &MyForm::BtnEjercicio1_Click);
			// 
			// LblInicio
			// 
			this->LblInicio->AutoSize = true;
			this->LblInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblInicio->Location = System::Drawing::Point(110, 53);
			this->LblInicio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LblInicio->Name = L"LblInicio";
			this->LblInicio->Size = System::Drawing::Size(90, 33);
			this->LblInicio->TabIndex = 2;
			this->LblInicio->Text = L"Inicio";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 412);
			this->Controls->Add(this->BtnEjercicio3);
			this->Controls->Add(this->BtnEjercicio2);
			this->Controls->Add(this->BtnEjercicio1);
			this->Controls->Add(this->LblInicio);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnEjercicio1_Click(System::Object^ sender, System::EventArgs^ e) {
		Ejercicio1().ShowDialog();
	}
private: System::Void BtnEjercicio2_Click(System::Object^ sender, System::EventArgs^ e) {
		Ejercicio2().ShowDialog();
}
private: System::Void BtnEjercicio3_Click(System::Object^ sender, System::EventArgs^ e) {
		Ejercicio3().ShowDialog();
}
};
}