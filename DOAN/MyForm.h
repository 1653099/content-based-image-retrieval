#pragma once
#include"Header.h"
constexpr auto harmonic = 3;
constexpr auto correctPoint = 0.9;
constexpr auto numReturn = 21;
#define HistogramPercent 0.5
#define EdgeDetectPercent 0.5
using namespace System::Runtime::InteropServices;


namespace DOAN {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		

	private: System::Windows::Forms::Button^  openfile;

	private: System::Windows::Forms::TextBox^  linkFile;
	private: System::Windows::Forms::PictureBox^  image;

	private: System::Windows::Forms::Button^  find;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: String ^ folder;
	private: System::Windows::Forms::Button^  map;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;







			 //private: void LoadDatabase();



	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openfile = (gcnew System::Windows::Forms::Button());
			this->linkFile = (gcnew System::Windows::Forms::TextBox());
			this->image = (gcnew System::Windows::Forms::PictureBox());
			this->find = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->map = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image))->BeginInit();
			this->SuspendLayout();
			// 
			// openfile
			// 
			this->openfile->Location = System::Drawing::Point(12, 12);
			this->openfile->Name = L"openfile";
			this->openfile->Size = System::Drawing::Size(75, 23);
			this->openfile->TabIndex = 0;
			this->openfile->Text = L"Open File";
			this->openfile->UseVisualStyleBackColor = true;
			this->openfile->Click += gcnew System::EventHandler(this, &MyForm::openfile_Click);
			// 
			// linkFile
			// 
			this->linkFile->Location = System::Drawing::Point(93, 14);
			this->linkFile->Name = L"linkFile";
			this->linkFile->Size = System::Drawing::Size(240, 20);
			this->linkFile->TabIndex = 1;
			// 
			// image
			// 
			this->image->Location = System::Drawing::Point(12, 55);
			this->image->Name = L"image";
			this->image->Size = System::Drawing::Size(230, 190);
			this->image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->image->TabIndex = 2;
			this->image->TabStop = false;
			// 
			// find
			// 
			this->find->Location = System::Drawing::Point(258, 321);
			this->find->Name = L"find";
			this->find->Size = System::Drawing::Size(75, 23);
			this->find->TabIndex = 5;
			this->find->Text = L"Find";
			this->find->UseVisualStyleBackColor = true;
			this->find->Click += gcnew System::EventHandler(this, &MyForm::find_Click);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->listView1->Location = System::Drawing::Point(360, 55);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(430, 437);
			this->listView1->TabIndex = 6;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::List;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 251);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Reset_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(167, 251);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Load DB";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::load_db);
			// 
			// map
			// 
			this->map->Location = System::Drawing::Point(569, 26);
			this->map->Name = L"map";
			this->map->Size = System::Drawing::Size(75, 23);
			this->map->TabIndex = 9;
			this->map->Text = L"Cals MAP: ";
			this->map->UseVisualStyleBackColor = true;
			this->map->Click += gcnew System::EventHandler(this, &MyForm::doMap);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(674, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"null";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 326);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Số lượng trả về: ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(167, 323);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(75, 21);
			this->comboBox1->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(357, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Time:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(54, 298);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Yêu cầu truy xuất: ";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(167, 298);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(53, 17);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Y/c 1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Click += gcnew System::EventHandler(this, &MyForm::check1_click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(237, 297);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(53, 17);
			this->checkBox2->TabIndex = 16;
			this->checkBox2->Text = L"Y/c 2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Click += gcnew System::EventHandler(this, &MyForm::check2_click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(802, 504);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->map);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->find);
			this->Controls->Add(this->image);
			this->Controls->Add(this->linkFile);
			this->Controls->Add(this->openfile);
			this->Name = L"MyForm";
			this->Text = L"Chọn ảnh";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::check2_click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->image))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openfile_Click(System::Object^  sender, System::EventArgs^  e) {
		IO::Stream^MyStream;
		OpenFileDialog^open = gcnew OpenFileDialog;
		open->InitialDirectory = "";
		open->Filter = " jpg files(*.jpg)|*.jpg|PNG files (*.png)|*.png| All files (*.*)|*.*";
		open->FilterIndex = 2;
		open->RestoreDirectory = true;

		if (open->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((MyStream = open->OpenFile()) != nullptr) {
				String^strFile = open->InitialDirectory + open->FileName;
				//MessageBox::Show(strFile);
				linkFile->Text = strFile;
				toStringx(linkFile->Text, fileQuerry);
				image->ImageLocation = strFile;
				MyStream->Close();
			}
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//listView1->View = Windows::Forms::View::Details;
		listView1->View = Windows::Forms::View::SmallIcon;

		listView1->Columns->Add("Image", 230);
		listView1->Columns->Add("Index", 170);
		//listView1->AutoResizeColumn(0, Windows::Forms::ColumnHeaderAutoResizeStyle::HeaderSize);
		comboBox1->Items->Add("3");
		comboBox1->Items->Add("5");
		comboBox1->Items->Add("11");
		comboBox1->Items->Add("21");
		comboBox1->Items->Add("All");
		comboBox1->SelectedText::set("All");
		checkBox1->Checked = true;
		checkBox2->Checked = false;
	}
	private: System::Void loadListImg()
	{
		if (myCHoice == 0) {
			ImageList ^imgs = gcnew  ImageList();
			imgs->ImageSize = System::Drawing::Size(230, 190);
			imgs->ColorDepth = ColorDepth::Depth32Bit;
			//MessageBox::Show(System::IO::Path::GetDirectoryName(linkFile->Text));
			//String^ folder = System::IO::Path::GetDirectoryName(linkFile->Text);
			int start = clock();
			if (folder == nullptr) {
				MessageBox::Show(L"You didn't choice DB");
			}
			else {
				searchImage();
				std::string numStr;
				toStringx(comboBox1->Text, numStr);
				if (numStr.compare("All") == 0) {
					//MessageBox::Show("abc");
					for (int i = 0; i < list.size(); i++) {
						String^tmp = gcnew String(list[i].addr.c_str());
						imgs->Images->Add(Image::FromFile(tmp));
					}
					listView1->SmallImageList = imgs;
					for (int i = 0; i < imgs->Images->Count; i++) {
						ListViewItem^item = (gcnew ListViewItem());
						item->ImageIndex = i;
						item->Text = list[i].cmpResult.ToString();
						listView1->Items->Add(item);
					}
				}
				else {
					int num = std::stoi(numStr);
					//array<String^>^ arr = IO::Directory::GetFiles(folder);
					//MessageBox::Show(arr->Length.ToString());

					for (int i = 0; i < num; i++) {
						String^tmp = gcnew String(list[i].addr.c_str());
						imgs->Images->Add(Image::FromFile(tmp));
					}
					listView1->SmallImageList = imgs;
					for (int i = 0; i < num; i++) {
						ListViewItem^item = (gcnew ListViewItem());
						item->ImageIndex = i;
						item->Text = list[i].cmpResult.ToString();
						listView1->Items->Add(item);
					}
				}
				int stop = clock();
				int time = (stop - start) / (double)(CLOCKS_PER_SEC) * 1000;

				label3->Text = L"Time: " + System::Convert::ToString(time) + L" ms";
			}
		}
		else if (myCHoice == 1) {
			ImageList ^imgs = gcnew  ImageList();
			imgs->ImageSize = System::Drawing::Size(230, 190);
			imgs->ColorDepth = ColorDepth::Depth32Bit;
			//MessageBox::Show(System::IO::Path::GetDirectoryName(linkFile->Text));
			//String^ folder = System::IO::Path::GetDirectoryName(linkFile->Text);
			int start = clock();
			if (folder == nullptr) {
				MessageBox::Show(L"You didn't choice DB");
			}
			else {
				
				searchImgWithEdgeDetect(3);
				std::string numStr;
				toStringx(comboBox1->Text, numStr);
				if (numStr.compare("All") == 0) {
					//MessageBox::Show("abc");
					for (int i = 0; i < list.size(); i++) {
						String^tmp = gcnew String(list[i].addr.c_str());
						imgs->Images->Add(Image::FromFile(tmp));
					}
					listView1->SmallImageList = imgs;
					for (int i = 0; i < imgs->Images->Count; i++) {
						ListViewItem^item = (gcnew ListViewItem());
						item->ImageIndex = i;
						item->Text = list[i].detectCmpResult.ToString();
						listView1->Items->Add(item);
					}
				}
				else {
					int num = std::stoi(numStr);
					//array<String^>^ arr = IO::Directory::GetFiles(folder);
					//MessageBox::Show(arr->Length.ToString());

					for (int i = 0; i < num; i++) {
						String^tmp = gcnew String(list[i].addr.c_str());
						imgs->Images->Add(Image::FromFile(tmp));
					}
					listView1->SmallImageList = imgs;
					for (int i = 0; i < num; i++) {
						ListViewItem^item = (gcnew ListViewItem());
						item->ImageIndex = i;
						item->Text = list[i].cmpResult.ToString();
						listView1->Items->Add(item);
					}
				}
				int stop = clock();
				int time = (stop - start) / (double)(CLOCKS_PER_SEC) * 1000;

				label3->Text = L"Time: " + System::Convert::ToString(time) + L" ms";
			}
		}

	}
	private: System::Void find_Click(System::Object^  sender, System::EventArgs^  e) {
		listView1->Clear();
		loadListImg();
	}

	private: System::Void Reset_Click(System::Object^  sender, System::EventArgs^  e) {
		listView1->Items->Clear();
	}
	private: System::Void load_db(System::Object^  sender, System::EventArgs^  e) {
		FolderBrowserDialog^ fbd = gcnew FolderBrowserDialog;
		if (fbd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			folder = fbd->SelectedPath;
		}
		if (folder != nullptr) {
			array<String^>^ arr = IO::Directory::GetFiles(folder);
			for (int i = 0; i < arr->Length; i++) {
				std::string tmp;
				toStringx(arr[i], tmp);
				cv::Mat Mat_tmp = cv::imread(tmp, 1);
				IMAGE cur;
				cur.addr = tmp;
				cur.mat = Mat_tmp;
				cur.cmpResult = 0.0;
				list.push_back(cur);
			}
		}
	}
	
	
	private: System::Void doMap(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = MAP(correctPoint, numReturn, harmonic).ToString();
	}



	private: System::Void check1_click(System::Object^  sender, System::EventArgs^  e) {
		myCHoice = 0;
		checkBox2->Checked = false;

	}
	private: System::Void check2_click(System::Object^  sender, System::EventArgs^  e) {
		myCHoice = 1;
		checkBox1->Checked = false;
	}
	};
}
void toStringx(System::String^ s, std::string& out) // conver string ^ -> string
{
	//using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	out = chars;
	Marshal::FreeHGlobal(System::IntPtr((void*)chars));
}
void sortListImage(int type)
{
	if (type == 0)
	{
		for (int i = 0; i < list.size() - 1; i++)
		{
			for (int j = i + 1; j < list.size(); j++)
			{
				if (list[i].cmpResult < list[j].cmpResult) {
					std::swap(list[i], list[j]);
				}
			}
		}
	}
	else if (type == 1)
	{
		for (int i = 0; i < list.size() - 1; i++)
		{
			for (int j = i + 1; j < list.size(); j++)
			{
				if (list[i].detectCmpResult < list[j].detectCmpResult)
					std::swap(list[i], list[j]);
			}
		}
	}
	else
	{
		//MessageBox::Show("This type sort of result compare doesn't support");
	}
}
void searchImage()
{
	cv::Mat tmp;
	std::vector<cv::Mat>hsv_planes;
	for (int i = 0; i < list.size(); i++)
	{
		hsv_planes.push_back(tmp);
	}
	for (int i = 0; i < list.size(); i++)
	{
		cv::Mat x;
		list[i].mat.copyTo(x);
		cvtColor(x, hsv_planes[i], cv::COLOR_BGR2HSV);
	}
	int h_bins = 50; int s_bins = 60;
	int histSize[] = { h_bins, s_bins };
	bool uniform = true; bool accumulate = false;


	float h_ranges[] = { 0, 360 };
	float s_ranges[] = { 0, 256 };
	const float* ranges[] = { h_ranges, s_ranges };

	std::vector<cv::MatND>histOfData;
	cv::MatND tmp1;
	for (int i = 0; i < list.size(); i++)
	{
		histOfData.push_back(tmp1);
	}
	/// Compute the histograms:
	int channels[] = { 0, 1 };
	for (int i = 0; i < list.size(); i++)
	{
		calcHist(&hsv_planes[i], 1, channels, cv::Mat(), histOfData[i], 2, histSize, ranges, uniform, accumulate);
		normalize(histOfData[i], histOfData[i], 0, 1, cv::NORM_MINMAX, -1, cv::Mat());
	}
	//calculate in query image/

	cv::Mat querry = cv::imread(fileQuerry, 1);
	cv::Mat hsv_Qry;
	cv::cvtColor(querry, hsv_Qry, cv::COLOR_BGR2HSV);
	cv::MatND hist_Qry;
	calcHist(&hsv_Qry, 1, channels, cv::Mat(), hist_Qry, 2, histSize, ranges, uniform, accumulate);
	normalize(hist_Qry, hist_Qry, 0, 1, cv::NORM_MINMAX, -1, cv::Mat());
	//compare histogram of query image and database
	int compareMethod = CV_COMP_CORREL;
	for (int i = 0; i < histOfData.size(); i++)
	{
		list[i].cmpResult = (double(compareHist(hist_Qry, histOfData[i], compareMethod)));
	}

	//sort the result compare from high to low
	sortListImage(0);
	//
}
double MAP(double correctPoint, int numReturn, int fn)
{
	double evalAgrthm;

	double Precion = 0, Recall = 0;

	double TP = (double)calNumRight(correctPoint);
	double TPFN = (double)calNumRight(0.8);

	Precion = TP / numReturn;
	Recall = TP / TPFN;

	evalAgrthm = (1 + pow(fn, 2.0)) * ((Precion * Recall) / (pow((double)fn, 2.0) *Precion + Recall));

	return evalAgrthm;
}

//yc2
int calNumRight(double correctPoint)
{
	int result = 0;

	for (int i = 0; i < list.size(); i++)
	{
		if (myCHoice == 0) {
			if (list[i].cmpResult >= correctPoint)
				result++;
		}
		else if (myCHoice == 1) {
			if (list[i].detectCmpResult >= correctPoint)
				result++;
		}
	}

	return result;
}
void CannyDetection(cv::Mat query, cv::Mat& edgeOfQuery, std::vector<cv::Mat>& edgeOfListImg)
{
	for (int i = 0; i < list.size(); i++)
	{
		cv::Mat tmp_gray;
		cvtColor(list[i].mat, tmp_gray, CV_BGR2GRAY);
		cv::Mat edgeDetect;
		Canny(tmp_gray, edgeDetect, 50, 150, 3);
		edgeOfListImg.push_back(edgeDetect);
	}

	cv::Mat tmp_gray1;
	cvtColor(query, tmp_gray1, CV_BGR2GRAY);
	cv::Mat edgeDetect;
	Canny(tmp_gray1, edgeDetect, 50, 150, 3);
	edgeOfQuery = edgeDetect;
}

void getResultCompare(cv::Mat edgeOfQuery, std::vector<cv::Mat> edgeOfListImg)
{
	int h_bins = 50; int s_bins = 60;
	int histSize[] = { h_bins, s_bins };

	float h_ranges[] = { 0, 360 };
	float s_ranges[] = { 0, 256 };
	const float* ranges[] = { h_ranges, s_ranges };
	int channels[] = { 0 };
	//calculate in query IMAGE/
	cv::MatND hist_Qry;

	calcHist(&edgeOfQuery, 1, channels, cv::Mat(), hist_Qry, 2, histSize, ranges, true, false);
	normalize(hist_Qry, hist_Qry, 0, 1, cv::NORM_MINMAX, -1, cv::Mat());

	for (int i = 0; i < list.size(); i++)
	{
		//listIMAGE[i].detectCmpResult = cv::MatchShapes(edgeOfQuery, edgeOfListImg[i], CV_CONTOURS_cv::MatCH_I1, 0);
		
		
		cv::MatND histOfData;
		cv::MatND tmp1;
		/// Compute the histograms:
		
		//System::Windows::Forms::MessageBox::Show(edgeOfListImg[1]);
		calcHist(&edgeOfListImg[i], 1, channels, cv::Mat(), histOfData, 2, histSize, ranges, true, false);
		normalize(histOfData, histOfData, 0, 1, cv::NORM_MINMAX, -1, cv::Mat());
		
		//compare histogram of query IMAGE and database
		int compareMethod = CV_COMP_CORREL;
		list[i].detectCmpResult = (double(compareHist(hist_Qry, histOfData, compareMethod)));
	}
}

void updateSearchResult()
{
	for (int i = 0; i < list.size(); i++)
	{
		list[i].detectCmpResult = list[i].cmpResult * HistogramPercent + list[i].detectCmpResult * EdgeDetectPercent;
	}
}
void searchImgWithEdgeDetect(int size)
{
	cv::Mat query = cv::imread(fileQuerry, 1);
	
	cv::Mat edgeOfQuery;
	std::vector<cv::Mat> edgeOfListImg;

	CannyDetection(query, edgeOfQuery, edgeOfListImg);

	getResultCompare( edgeOfQuery, edgeOfListImg);
	sortListImage(1);
	searchImage();
	updateSearchResult();

	sortListImage(1);
}