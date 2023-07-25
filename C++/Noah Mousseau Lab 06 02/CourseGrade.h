class CourseGrade {
private:
	int course;
	float grade;
public:
	void setCourse(int c);
	void setGrade(float g);
	int getCourse() const;
	float getGrade() const;
	CourseGrade(int c, float g);
};