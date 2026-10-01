class Komputer {

    private String merek;
    private String model;

    private RAM ram;
    private CPU cpu;
    private GPU gpu;
    private Storage storage;

    public Komputer(String merek, String model) {
        this.merek = merek;
        this.model = model;

        this.ram = new RAM("", "");
        this.cpu = new CPU("", "", "");
        this.gpu = new GPU("", "", "");
        this.storage = new Storage("", "");
    }

    public String getMerek() {
        return merek;
    }

    public void setMerek(String merek) {
        this.merek = merek;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public RAM getRam() {
        return ram;
    }

    public CPU getCpu() {
        return cpu;
    }

    public GPU getGpu() {
        return gpu;
    }

    public Storage getStorage() {
        return storage;
    }
}