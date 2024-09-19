public class Funcionario extends Pessoa{
    private String cargo;
    private String setor;

    public Funcionario(String nome, int idade, String cpf, String cargo, String setor) {
        super(nome, idade, cpf);
        this.cargo = cargo;
        this.setor = setor;
    }
    public String exibirDados(){
        return String.format("nome:%s\n idade:%s cpf:%s\n matricula:%s\n curso:%s\n cargo:%s\n setor%s\n", nome, idade, cpf, cargo, setor );

    }

    public String executarTarefa(String tarefa){
        
    }

    public String getCargo() {
        return cargo;
    }

    public void setCargo(String cargo) {
        this.cargo = cargo;
    }

    public String getSetor() {
        return setor;
    }

    public void setSetor(String setor) {
        this.setor = setor;
    }
}
