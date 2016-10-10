<?php

    $all = $row->field_field_allergene;

    foreach ($all as $key=>$value){
        print "<li><span style='float:left;'>".$value['rendered']['#lineage']['0']["#markup"]."</span>";
        $level = $value['rendered']['#lineage']['1']["#markup"];
        if ($level=="Presenza")
        {
            echo "<div class='indicatore red' style=''>&nbsp;</div></li>";
        }
        else
        {
            if ($level=="Tracce")
                echo "<div class='indicatore yellow' style=''>&nbsp;</div></li>";
        }
    }

?>