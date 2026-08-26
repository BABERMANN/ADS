package tests;

import java.time.LocalDate;

public class Post {
    private String quote;
    private LocalDate date;
    private int claps;
    private int boos;
    private UserAccount user;

    public Post(UserAccount account, String quote){
        this.user = account;
        this.quote = quote;
        this.date = LocalDate.now();
        this.claps = 0;
        this.boos = 0;
    }

    public String show(){
        return "[" + date + "]" + user.getUserName() + "says \"" + quote + "\"|claps:\"" + claps + "\"| Boos:\"" + boos;
    }

    public void clap(){
        this.claps += 1;
    }

    public void boo(){
        this.boos += 1;
    }




}




