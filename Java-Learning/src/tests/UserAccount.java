package tests;

public class UserAccount {
    private String email;
    private String userName;
    private UserAccount[] followers;
    private Post[] timeline = new Post[10];
    private Post[] posts;

    public UserAccount(String email, String userName){
        this.email = email;
        this.userName = userName;
        this.followers = new UserAccount[10];
        this.timeline = new  Post[10];
        this.posts = new Post[10];
    }

    public String getUserName() {
        return userName;
    }

    public void updateTimeline(Post newPost) {
        for (int i = 0; i < timeline.length; i++) {
            if (timeline[i] == null) {
                timeline[i] = newPost;
                return;
            }
        }
        for(int i = 0;i < timeline.length - 1; i ++){
            timeline[i] = timeline[i + 1];
        }
        timeline[posts.length - 1] = newPost;
    }

    \\ timeLine[qtdTimeline % 10] = post;
    \\ qtdTimeline;

    
    public void publish(String quote){
        Post newPost = new Post(this, quote);
        if (newPost == null || quote.isBlank()) return;
        for(int i = 0; i < posts.length; i ++){
            if(posts[i] == null){
                posts[i] = newPost;
                break;

            }
        }
        for(UserAccount follower:followers){
            follower.updateTimeline(newPost);
        }
    }

    public boolean delete(int postidx){
        if(postidx < 0 || postidx >= posts.length || posts[postidx] == null ) return false;
        for(int i = postidx;i < posts.length - 1; i ++){
            posts[i] = posts[i + 1];
        }
        posts[posts.length - 1] = null;
        return true;
    }
    
    public void booPost(int postidx){
        if(postidx >= 0 && postidx < timeline.length ) timeline[postidx].boo();
    }

    public void clapPost(int postidx){
        if(postidx >= 0 && postidx < timeline.length ) timeline[postidx].clap();
    }

    public void acceptFollower(UserAccount newFollower){
        if(newFollower == null) return;
        for(UserAccount follower:followers){
                if(follower.equals(newFollower)) return;
        }
        for(int i = 0;i < followers.length; i++){
            if(followers[i] == null){
                followers[i] = newFollower;
                return;
            }
        }
    }

    public void blockFollower(UserAccount follower){
        if(follower == null) return;
        for(int i = 0; i < followers.length; i++){
            if(followers[i].equals(follower)){
                for(int j = i; j < followers.length - 1; j ++){
                    followers[j] = followers[j + 1];
                }
            }
        }
        followers[followers.length - 1] = null;
    }

}
