#pragma once

namespace sdds {
	class Subject {
		char m_code[7]; // holds the subject code (exactly 6 characters)
		int m_mark;     // the mark out of 100
		char grade()const;
	public:
		Subject(); // default const
		~Subject(); // destructor
		void setEmpty();
		void set(const char* code, int mark);;
		float scale4()const;
		bool isValid()const;
		void display()const;
	};
}
