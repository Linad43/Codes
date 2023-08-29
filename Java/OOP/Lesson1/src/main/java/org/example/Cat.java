package org.example;

public class Cat extends Animal
{
    //private String name;
    private String color;
    private int age;


    public Cat(String name, String color, int age) {
        super(name);
        this.color = color;
        this.age = age;
    }

    public Cat() {
    }



    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    @Override
    public String toString() {
        return "Cat{" +
                "color='" + color + '\'' +
                ", age=" + age +
                ", name='" + name + '\'' +
                '}';
    }
    @Override
    public void animalInfo()
    {
        System.out.println("Кот " + name + " цвета: " + color + " возраст: " + age);
    }
}
