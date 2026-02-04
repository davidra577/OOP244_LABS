// Name: David Ra
// Email: dra@myseneca.ca
// Student ID: 101977205
// Lab 4 (PART 1)
// Date: OCT 15th 2020
// SECTION: OOP244 NEE
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

namespace sdds {

	class Box {
        char* m_contentName;   // the conent name pointer:
                               // this pointer holds the name of the material to be kept in the box
                               // dynamically
        int m_width;           // The dimensions of the box in Inches
        int m_height;
        int m_length;
        int m_contentVolume;   // the content volume:
                               // This variable holds the volume of the material currently in 
                               // the box in Cubic Inches
        void setName(const char* Cstr);
        void setUnusable();
        bool isUnusable()const;
        bool hasContent()const;
    public:
        Box();
        ~Box();
        Box(int sideLength, const char* contentName = nullptr);
        Box(int width, int height, int length, const char* contentName = nullptr);
        int capacity()const;
        int quantity()const;
        Box& setContent(const char* contentName);
        std::ostream& display()const;
        Box& add(int quantity);
        Box& add(Box& B);
	};
}