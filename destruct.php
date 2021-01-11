<?php
Class Ve {

    private $a = 0;

    public function __construct(int $number) {
        $this->a = $number;
    }

    function __destruct() {
        echo "ok: {$this->a}";
    }
}


$a = new Ve(1);
$b = new Ve(2);
$c = new Ve(3);

?>