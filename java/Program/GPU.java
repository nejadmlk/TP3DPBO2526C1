class GPU {

    private String merek;
    private String model;
    private String vram;

    public GPU(String merek, String model, String vram) {
        this.merek = merek;
        this.model = model;
        this.vram = vram;
    }

    public String getMerek() {
        return merek;
    }

    public String getModel() {
        return model;
    }

    public String getVram() {
        return vram;
    }

    public void setMerek(String merek) {
        this.merek = merek;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public void setVram(String vram) {
        this.vram = vram;
    }
}